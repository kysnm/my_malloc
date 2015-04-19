require "bundler/gem_tasks"
require "rake/extensiontask"

task :build => :compile

Rake::ExtensionTask.new("my_malloc") do |ext|
  ext.lib_dir = "lib/my_malloc"
end
