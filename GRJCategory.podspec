    Pod::Spec.new do |s|
        
        s.name         = "GRJCategory"
        
        s.version      = "0.0.1"
        
        s.summary      = "GRJ gogogo"
        
        s.description  = <<-DESC
        my Category
        DESC
        s.homepage     = "https://github.com/Jack424/GRJCategory"
        
        s.license      = "MIT"
        s.license      = { :type => "MIT", :file => "LICENSE" }
    
    s.author       = "GRJ"
    s.platform     = :ios
    
    s.source       = { :git => "https://github.com/Jack424/GRJCategory.git", :tag => {s.version} }
    s.source_files  = "GRJCategory/**/*.{h,m}"
    
    s.exclude_files = "GRJCategory/Exclude"
    
    s.framework  = "UIKit"
    
    
    s.requires_arc = true
    
    end