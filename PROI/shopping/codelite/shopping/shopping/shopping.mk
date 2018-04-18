##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=shopping
ConfigurationName      :=Debug
WorkspacePath          :=/home/mion/s/196/kblankie/laborki/PROI/shopping/codelite/shopping
ProjectPath            :=/home/mion/s/196/kblankie/laborki/PROI/shopping/codelite/shopping/shopping
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=
Date                   :=04/18/18
CodeLitePath           :=/home/mion/s/196/kblankie/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="shopping.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  $(shell pkg-config --libs gtkmm-3.0)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -Wall -O0 $(shell pkg-config --cflags gtkmm-3.0) $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/Basket.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Product.cpp$(ObjectSuffix) $(IntermediateDirectory)/Month.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Basket.cpp$(ObjectSuffix): Basket.cpp $(IntermediateDirectory)/Basket.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mion/s/196/kblankie/laborki/PROI/shopping/codelite/shopping/shopping/Basket.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Basket.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Basket.cpp$(DependSuffix): Basket.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Basket.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Basket.cpp$(DependSuffix) -MM Basket.cpp

$(IntermediateDirectory)/Basket.cpp$(PreprocessSuffix): Basket.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Basket.cpp$(PreprocessSuffix) Basket.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mion/s/196/kblankie/laborki/PROI/shopping/codelite/shopping/shopping/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Product.cpp$(ObjectSuffix): Product.cpp $(IntermediateDirectory)/Product.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mion/s/196/kblankie/laborki/PROI/shopping/codelite/shopping/shopping/Product.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Product.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Product.cpp$(DependSuffix): Product.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Product.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Product.cpp$(DependSuffix) -MM Product.cpp

$(IntermediateDirectory)/Product.cpp$(PreprocessSuffix): Product.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Product.cpp$(PreprocessSuffix) Product.cpp

$(IntermediateDirectory)/Month.cpp$(ObjectSuffix): Month.cpp $(IntermediateDirectory)/Month.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mion/s/196/kblankie/laborki/PROI/shopping/codelite/shopping/shopping/Month.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Month.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Month.cpp$(DependSuffix): Month.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Month.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Month.cpp$(DependSuffix) -MM Month.cpp

$(IntermediateDirectory)/Month.cpp$(PreprocessSuffix): Month.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Month.cpp$(PreprocessSuffix) Month.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


