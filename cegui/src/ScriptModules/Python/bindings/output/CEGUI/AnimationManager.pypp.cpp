// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "AnimationManager.pypp.hpp"

namespace bp = boost::python;

void register_AnimationManager_class(){

    { //::CEGUI::AnimationManager
        typedef bp::class_< CEGUI::AnimationManager, bp::bases< CEGUI::Singleton< CEGUI::AnimationManager > >, boost::noncopyable > AnimationManager_exposer_t;
        AnimationManager_exposer_t AnimationManager_exposer = AnimationManager_exposer_t( "AnimationManager", bp::init< >("*************************************************************************\n\
                Construction and Destruction\n\
            *************************************************************************\n\
            *!\n\
            \n\
                Constructs a new AnimationManager object.\n\
        \n\
                NB: Client code should not create AnimationManager objects - they are of\n\
                limited use to you!  The intended pattern of access is to get a pointer\n\
                to the GUI system's AnimationManager via the System object, and use\n\
                that.\n\
            *\n") );
        bp::scope AnimationManager_scope( AnimationManager_exposer );
        { //::CEGUI::AnimationManager::addInterpolator
        
            typedef void ( ::CEGUI::AnimationManager::*addInterpolator_function_type )( ::CEGUI::Interpolator * ) ;
            
            AnimationManager_exposer.def( 
                "addInterpolator"
                , addInterpolator_function_type( &::CEGUI::AnimationManager::addInterpolator )
                , ( bp::arg("interpolator") )
                , "*!\n\
                \n\
                    Adds interpolator to be available for Affectors\n\
            \n\
                \n\
                    CEGUI ships with several basic interpolators that are always available,\n\
                    float, bool, colour, UDim, UVector2, ... but you can add your own\n\
                    custom interpolator if needed! just note that AnimationManager only\n\
                    deletes inbuilt interpolators. It will remove your interpolator if you\n\
                    don't do it yourself, but you definitely have to delete it yourself!\n\
                *\n" );
        
        }
        { //::CEGUI::AnimationManager::autoStepInstances
        
            typedef void ( ::CEGUI::AnimationManager::*autoStepInstances_function_type )( float ) ;
            
            AnimationManager_exposer.def( 
                "autoStepInstances"
                , autoStepInstances_function_type( &::CEGUI::AnimationManager::autoStepInstances )
                , ( bp::arg("delta") )
                , "*!\n\
                \n\
                    Internal method, gets called by CEGUI.System automatically.\n\
            \n\
                    Only use if you know what you're doing!\n\
            \n\
                \n\
                  Steps animation instances with auto stepping enabled forward\n\
                  by given delta.\n\
                *\n" );
        
        }
        { //::CEGUI::AnimationManager::createAnimation
        
            typedef ::CEGUI::Animation * ( ::CEGUI::AnimationManager::*createAnimation_function_type )( ::CEGUI::String const & ) ;
            
            AnimationManager_exposer.def( 
                "createAnimation"
                , createAnimation_function_type( &::CEGUI::AnimationManager::createAnimation )
                , ( bp::arg("name")="" )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Creates a new Animation definition\n\
            \n\
                @see\n\
                    Animation\n\
                *\n" );
        
        }
        { //::CEGUI::AnimationManager::destroyAllAnimationInstances
        
            typedef void ( ::CEGUI::AnimationManager::*destroyAllAnimationInstances_function_type )(  ) ;
            
            AnimationManager_exposer.def( 
                "destroyAllAnimationInstances"
                , destroyAllAnimationInstances_function_type( &::CEGUI::AnimationManager::destroyAllAnimationInstances )
                , "*!\n\
            \n\
                Destroys all instances of all animations\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::destroyAllAnimations
        
            typedef void ( ::CEGUI::AnimationManager::*destroyAllAnimations_function_type )(  ) ;
            
            AnimationManager_exposer.def( 
                "destroyAllAnimations"
                , destroyAllAnimations_function_type( &::CEGUI::AnimationManager::destroyAllAnimations )
                , "*!\n\
            \n\
                Destroys all animations in existence!\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::destroyAllInstancesOfAnimation
        
            typedef void ( ::CEGUI::AnimationManager::*destroyAllInstancesOfAnimation_function_type )( ::CEGUI::Animation * ) ;
            
            AnimationManager_exposer.def( 
                "destroyAllInstancesOfAnimation"
                , destroyAllInstancesOfAnimation_function_type( &::CEGUI::AnimationManager::destroyAllInstancesOfAnimation )
                , ( bp::arg("animation") )
                , "*!\n\
            \n\
                Destroys all instances of given animation\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::destroyAnimation
        
            typedef void ( ::CEGUI::AnimationManager::*destroyAnimation_function_type )( ::CEGUI::Animation * ) ;
            
            AnimationManager_exposer.def( 
                "destroyAnimation"
                , destroyAnimation_function_type( &::CEGUI::AnimationManager::destroyAnimation )
                , ( bp::arg("animation") )
                , "*!\n\
            \n\
                Destroys given animation definition\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::destroyAnimation
        
            typedef void ( ::CEGUI::AnimationManager::*destroyAnimation_function_type )( ::CEGUI::String const & ) ;
            
            AnimationManager_exposer.def( 
                "destroyAnimation"
                , destroyAnimation_function_type( &::CEGUI::AnimationManager::destroyAnimation )
                , ( bp::arg("name") )
                , "*!\n\
            \n\
                Destroys given animation definition by name\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::destroyAnimationInstance
        
            typedef void ( ::CEGUI::AnimationManager::*destroyAnimationInstance_function_type )( ::CEGUI::AnimationInstance * ) ;
            
            AnimationManager_exposer.def( 
                "destroyAnimationInstance"
                , destroyAnimationInstance_function_type( &::CEGUI::AnimationManager::destroyAnimationInstance )
                , ( bp::arg("instance") )
                , "*!\n\
            \n\
                Destroys given animation instance\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::getAnimation
        
            typedef ::CEGUI::Animation * ( ::CEGUI::AnimationManager::*getAnimation_function_type )( ::CEGUI::String const & ) const;
            
            AnimationManager_exposer.def( 
                "getAnimation"
                , getAnimation_function_type( &::CEGUI::AnimationManager::getAnimation )
                , ( bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
            \n\
                Retrieves animation by name\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::getAnimationAtIdx
        
            typedef ::CEGUI::Animation * ( ::CEGUI::AnimationManager::*getAnimationAtIdx_function_type )( ::size_t ) const;
            
            AnimationManager_exposer.def( 
                "getAnimationAtIdx"
                , getAnimationAtIdx_function_type( &::CEGUI::AnimationManager::getAnimationAtIdx )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
            \n\
                Retrieves animation by index\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::getAnimationDefinitionAsString
        
            typedef ::CEGUI::String ( ::CEGUI::AnimationManager::*getAnimationDefinitionAsString_function_type )( ::CEGUI::Animation const & ) const;
            
            AnimationManager_exposer.def( 
                "getAnimationDefinitionAsString"
                , getAnimationDefinitionAsString_function_type( &::CEGUI::AnimationManager::getAnimationDefinitionAsString )
                , ( bp::arg("animation") )
                , "*!\n\
                \n\
                    Writes given animation definition and returns the result as String\n\
            \n\
                @param animation\n\
                    Animation definition to write\n\
            \n\
                @Warning: \n\
                    This is a convenience function and isn't designed to be fast at all! Use the other\
                    alternatives\n\
                    if you want performance.\n\
            \n\
                @return\n\
                    String containing the resulting XML\n\
                *\n" );
        
        }
        { //::CEGUI::AnimationManager::getAnimationInstanceAtIdx
        
            typedef ::CEGUI::AnimationInstance * ( ::CEGUI::AnimationManager::*getAnimationInstanceAtIdx_function_type )( ::size_t ) const;
            
            AnimationManager_exposer.def( 
                "getAnimationInstanceAtIdx"
                , getAnimationInstanceAtIdx_function_type( &::CEGUI::AnimationManager::getAnimationInstanceAtIdx )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
            \n\
                Retrieves animation instance at given index\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::getDefaultResourceGroup
        
            typedef ::CEGUI::String const & ( *getDefaultResourceGroup_function_type )(  );
            
            AnimationManager_exposer.def( 
                "getDefaultResourceGroup"
                , getDefaultResourceGroup_function_type( &::CEGUI::AnimationManager::getDefaultResourceGroup )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns the default resource group currently set for loading animation\n\
                    xml data.\n\
            \n\
                @return\n\
                    String describing the default resource group identifier that will be\n\
                    used when loading Animation xml data.\n\
                *\n" );
        
        }
        { //::CEGUI::AnimationManager::getInterpolator
        
            typedef ::CEGUI::Interpolator * ( ::CEGUI::AnimationManager::*getInterpolator_function_type )( ::CEGUI::String const & ) const;
            
            AnimationManager_exposer.def( 
                "getInterpolator"
                , getInterpolator_function_type( &::CEGUI::AnimationManager::getInterpolator )
                , ( bp::arg("type") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
            \n\
                Retrieves interpolator by type\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::getNumAnimationInstances
        
            typedef ::size_t ( ::CEGUI::AnimationManager::*getNumAnimationInstances_function_type )(  ) const;
            
            AnimationManager_exposer.def( 
                "getNumAnimationInstances"
                , getNumAnimationInstances_function_type( &::CEGUI::AnimationManager::getNumAnimationInstances )
                , "*!\n\
            \n\
                Retrieves number of animation instances, number of times any animation\n\
                was instantiated.\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::getNumAnimations
        
            typedef ::size_t ( ::CEGUI::AnimationManager::*getNumAnimations_function_type )(  ) const;
            
            AnimationManager_exposer.def( 
                "getNumAnimations"
                , getNumAnimations_function_type( &::CEGUI::AnimationManager::getNumAnimations )
                , "*!\n\
            \n\
                Retrieves number of defined animations\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::instantiateAnimation
        
            typedef ::CEGUI::AnimationInstance * ( ::CEGUI::AnimationManager::*instantiateAnimation_function_type )( ::CEGUI::Animation * ) ;
            
            AnimationManager_exposer.def( 
                "instantiateAnimation"
                , instantiateAnimation_function_type( &::CEGUI::AnimationManager::instantiateAnimation )
                , ( bp::arg("animation") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Instantiates given animation\n\
            \n\
                @see\n\
                    AnimationInstance\n\
                *\n" );
        
        }
        { //::CEGUI::AnimationManager::instantiateAnimation
        
            typedef ::CEGUI::AnimationInstance * ( ::CEGUI::AnimationManager::*instantiateAnimation_function_type )( ::CEGUI::String const & ) ;
            
            AnimationManager_exposer.def( 
                "instantiateAnimation"
                , instantiateAnimation_function_type( &::CEGUI::AnimationManager::instantiateAnimation )
                , ( bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Instantiates given animation by name\n\
            \n\
                @see\n\
                    AnimationInstance\n\
                *\n" );
        
        }
        { //::CEGUI::AnimationManager::isAnimationPresent
        
            typedef bool ( ::CEGUI::AnimationManager::*isAnimationPresent_function_type )( ::CEGUI::String const & ) const;
            
            AnimationManager_exposer.def( 
                "isAnimationPresent"
                , isAnimationPresent_function_type( &::CEGUI::AnimationManager::isAnimationPresent )
                , ( bp::arg("name") )
                , "*!\n\
                \n\
                    Examines the list of Animations to see if one exists with the given name\n\
            \n\
                @param name\n\
                    String holding the name of the Animation to look for.\n\
            \n\
                @return\n\
                    true if an Animation was found with a name matching  name.  false if\n\
                    no matching Animation was found.\n\
                *\n" );
        
        }
        { //::CEGUI::AnimationManager::loadAnimationsFromString
        
            typedef void ( ::CEGUI::AnimationManager::*loadAnimationsFromString_function_type )( ::CEGUI::String const & ) ;
            
            AnimationManager_exposer.def( 
                "loadAnimationsFromString"
                , loadAnimationsFromString_function_type( &::CEGUI::AnimationManager::loadAnimationsFromString )
                , ( bp::arg("source") )
                , "*!\n\
                \n\
                    Parses XML source containing animation specifications to create\n\
                    and initialise Animation objects.\n\
            \n\
                @param source\n\
                    String object holding the XML source to be processed.\n\
                *\n" );
        
        }
        { //::CEGUI::AnimationManager::loadAnimationsFromXML
        
            typedef void ( ::CEGUI::AnimationManager::*loadAnimationsFromXML_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            AnimationManager_exposer.def( 
                "loadAnimationsFromXML"
                , loadAnimationsFromXML_function_type( &::CEGUI::AnimationManager::loadAnimationsFromXML )
                , ( bp::arg("filename"), bp::arg("resourceGroup")="" )
                , "*!\n\
                \n\
                    Parses an XML file containing animation specifications to create\n\
                    and initialise Animation objects.\n\
            \n\
                @param filename\n\
                    String object holding the filename of the XML file to be processed.\n\
            \n\
                @param resourceGroup\n\
                    Resource group identifier to be passed to the resource provider when\n\
                    loading the XML file.\n\
                *\n" );
        
        }
        { //::CEGUI::AnimationManager::removeInterpolator
        
            typedef void ( ::CEGUI::AnimationManager::*removeInterpolator_function_type )( ::CEGUI::Interpolator * ) ;
            
            AnimationManager_exposer.def( 
                "removeInterpolator"
                , removeInterpolator_function_type( &::CEGUI::AnimationManager::removeInterpolator )
                , ( bp::arg("interpolator") )
                , "*!\n\
            \n\
                Removes interpolator\n\
            *\n" );
        
        }
        { //::CEGUI::AnimationManager::setDefaultResourceGroup
        
            typedef void ( *setDefaultResourceGroup_function_type )( ::CEGUI::String const & );
            
            AnimationManager_exposer.def( 
                "setDefaultResourceGroup"
                , setDefaultResourceGroup_function_type( &::CEGUI::AnimationManager::setDefaultResourceGroup )
                , ( bp::arg("resourceGroup") )
                , "*!\n\
                \n\
                    Sets the default resource group to be used when loading animation xml\n\
                    data\n\
            \n\
                @param resourceGroup\n\
                    String describing the default resource group identifier to be used.\n\
                *\n" );
        
        }
        { //::CEGUI::AnimationManager::writeAnimationDefinitionToStream
        
            typedef void ( ::CEGUI::AnimationManager::*writeAnimationDefinitionToStream_function_type )( ::CEGUI::Animation const &,::CEGUI::OutStream & ) const;
            
            AnimationManager_exposer.def( 
                "writeAnimationDefinitionToStream"
                , writeAnimationDefinitionToStream_function_type( &::CEGUI::AnimationManager::writeAnimationDefinitionToStream )
                , ( bp::arg("animation"), bp::arg("out_stream") )
                , "*!\n\
                \n\
                    Writes given animation definition to the given OutStream.\n\
            \n\
                @param animation\n\
                    Animation definition to write\n\
            \n\
                @param out_stream\n\
                    OutStream (std.ostream based) object where data is to be sent.\n\
                *\n" );
        
        }
        AnimationManager_exposer.add_static_property( "XMLSchemaName"
                        , bp::make_getter( &CEGUI::AnimationManager::XMLSchemaName
                                , bp::return_value_policy< bp::return_by_value >() ) );
        AnimationManager_exposer.staticmethod( "getDefaultResourceGroup" );
        AnimationManager_exposer.staticmethod( "setDefaultResourceGroup" );
    }

}
