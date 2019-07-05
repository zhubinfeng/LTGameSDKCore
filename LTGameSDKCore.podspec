

Pod::Spec.new do |s|

  s.name         = "LTGameSDKCore"
  s.version      = "0.0.4"
  s.summary      = "LTGameSDKCore Supports base function to third login."
  s.description  = "You can use this SDK easy in third login, and this sdk will add more for later"
  s.homepage     = "https://github.com/zhubinfeng/LTGameSDKCore"
  s.license      = "MIT"
  s.author       = { "zhubinfeng" => "zhubin_feng@163.com" }
  s.platform     = :ios
  s.source       = { :git => "https://github.com/zhubinfeng/LTGameSDKCore.git", :tag => "#{s.version}" }
  s.source_files  = "LTGameSDKCore/LTGameSDKCore.framework/Headers/*.{h}"
  s.vendored_frameworks = 'LTGameSDKCore/LTGameSDKCore.framework'
  s.framework  = "Foundation", "UIKit"

      s.subspec 'LTSDKPlatforms' do |sp|

        # Facebook
        sp.subspec 'Facebook' do |ssp|
          ssp.vendored_frameworks = 'LTGameSDKCore/Support/PlatformSDK/FacebookSDK/FBSDKCoreKit.framework','LTGameSDKCore/Support/PlatformSDK/FacebookSDK/FBSDKLoginKit.framework','LTGameSDKCore/Support/PlatformSDK/FacebookSDK/Bolts.framework'
        end

      end


end
