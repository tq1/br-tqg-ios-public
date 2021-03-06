
#
 # Be sure to run pod lib lint TQGeolocationSDK.podspec to ensure this is a
 # valid spec and remove all comments before submitting the spec.
 #
 # Any lines starting with a # are optional, but encouraged
 #
 # To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
 #

 Pod::Spec.new do |s|
 s.name = "TQGeolocationSDK"
 s.version = "2.0.2"
 s.summary = "Library TQGeolocationSDK"

 s.homepage = "https://github.com/tq1/br-tqg-ios-public"
 s.license = { :type => 'Comercial'}
 s.author = { "Taqtile" => "felipe.sabino@taqtile.com" }
 s.source = { :git => "git@github.com:tq1/br-tqg-ios-public.git", :tag => "2.0.2" }

 s.platform = :ios, '8.0'
 s.requires_arc = true
 s.vendored_frameworks = 'TQGeolocationSDK/TQGeolocationSDK.framework', 'TQGeolocationSDK/FMDB.framework'

 s.library = 'sqlite3'

 end
