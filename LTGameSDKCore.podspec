

Pod::Spec.new do |s|

  s.name         = "LTGameSDKCore"
  s.version      = "0.1.3"
  s.summary      = "LTGameSDKCore Supports base function to third login."
  s.description  = "You can use this SDK easy in third login, and this sdk will add more for later"
  s.homepage     = "https://github.com/zhubinfeng/LTGameSDKCore"
  s.license      = "MIT"
  s.author       = { "zhubinfeng" => "zhubin_feng@163.com" }
  s.platform     = :ios
  s.source       = { :git => "https://github.com/zhubinfeng/LTGameSDKCore.git", :tag => "#{s.version}" }
  s.default_subspecs = 'LTSDKCore'
  s.framework  = "Foundation", "UIKit"

      s.subspec 'LTSDKCore' do |sp|
        sp.vendored_frameworks = 'LTGameSDKCore/LTGameSDKCore.framework'
        sp.source_files  = "LTGameSDKCore/LTGameSDKCore.framework/Headers/*.{h}"
      end

      s.subspec 'LTSDKPlatforms' do |sp|

        # Facebook
        sp.subspec 'Facebook' do |ssp|
          ssp.vendored_frameworks = 'LTGameSDKCore/Support/PlatformSDK/FacebookSDK/FBSDKCoreKit.framework','LTGameSDKCore/Support/PlatformSDK/FacebookSDK/FBSDKLoginKit.framework','LTGameSDKCore/Support/PlatformSDK/FacebookSDK/Bolts.framework','LTGameSDKCore/Support/PlatformSDK/FacebookSDK/LTPlatformFacebook.framework'
        end

        # Google
        sp.subspec 'Google' do |ssp|
          ssp.vendored_frameworks = 'LTGameSDKCore/Support/PlatformSDK/GoogleSDK/GoogleSignIn.framework','LTGameSDKCore/Support/PlatformSDK/GoogleSDK/GoogleSignInDependencies.framework','LTGameSDKCore/Support/PlatformSDK/GoogleSDK/LTPlatformGoogle.framework'
          ssp.resources = 'LTGameSDKCore/Support/PlatformSDK/GoogleSDK/GoogleSignIn.bundle'
          ssp.frameworks = 'LocalAuthentication','SafariServices','SystemConfiguration'
        end

      end


end
