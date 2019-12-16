

Pod::Spec.new do |s|

  s.name         = "LTGameSDKCore"
  s.version      = "0.3.7"
  s.summary      = "LTGameSDKCore Supports base function to third login."
  s.description  = "You can use this SDK easy in third login, and this sdk will add more for later,very good"
  s.homepage     = "https://github.com/zhubinfeng/LTGameSDKCore"
  s.license      = "MIT"
  s.author       = { "zhubinfeng" => "zhubin_feng@163.com" }
  s.platform     = :ios
  s.pod_target_xcconfig = { 'VALID_ARCHS[sdk=iphonesimulator*]' => '' }
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
          ssp.vendored_frameworks = 'LTGameSDKCore/Support/PlatformSDK/FacebookSDK/FBSDKCoreKit.framework','LTGameSDKCore/Support/PlatformSDK/FacebookSDK/FBSDKLoginKit.framework','LTGameSDKCore/Support/PlatformSDK/FacebookSDK/LTPlatformFacebook.framework'
          ssp.frameworks = 'Accelerate'
        end

        # Google
        sp.subspec 'Google' do |ssp|
          ssp.vendored_frameworks = 'LTGameSDKCore/Support/PlatformSDK/GoogleSDK/GoogleSignIn.framework','LTGameSDKCore/Support/PlatformSDK/GoogleSDK/GoogleSignInDependencies.framework','LTGameSDKCore/Support/PlatformSDK/GoogleSDK/LTPlatformGoogle.framework'
          ssp.resources = 'LTGameSDKCore/Support/PlatformSDK/GoogleSDK/GoogleSignIn.bundle'
          ssp.frameworks = 'LocalAuthentication','SafariServices','SystemConfiguration'
        end
        # Phone
        sp.subspec 'Phone' do |ssp|
          ssp.vendored_frameworks = 'LTGameSDKCore/Support/PlatformSDK/PhoneSDK/LTPlatformPhone.framework'
        end
        # QQ
        sp.subspec 'QQ' do |ssp|
          ssp.vendored_frameworks = 'LTGameSDKCore/Support/PlatformSDK/QQSDK/LTPlatformQQ.framework','LTGameSDKCore/Support/PlatformSDK/QQSDK/TencentOpenAPI.framework'
          ssp.frameworks = "Foundation", "UIKit","Security","SystemConfiguration","CoreGraphics","CoreTelephony"
          ssp.libraries = "iconv", "sqlite3", "z","stdc++"
        end
        # Weixin
        sp.subspec 'Weixin' do |ssp|
          ssp.vendored_frameworks = 'LTGameSDKCore/Support/PlatformSDK/WeixinSDK/LTPlatformWeixin.framework'
          ssp.libraries = "z", "sqlite3.0", "c++"
        end
        # apple
        sp.subspec 'AppleSign' do |ssp|
          ssp.vendored_frameworks = 'LTGameSDKCore/Support/PlatformSDK/AppleSDK/LTPlatformApple.framework'
        end
        # apple
        sp.subspec 'Guest' do |ssp|
          ssp.vendored_frameworks = 'LTGameSDKCore/Support/PlatformSDK/GuestSDK/LTPlatformGuest.framework'
        end

      end


end
