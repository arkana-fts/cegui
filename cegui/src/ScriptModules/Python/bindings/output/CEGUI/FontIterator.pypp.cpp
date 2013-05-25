// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "FontIterator.pypp.hpp"

namespace bp = boost::python;

struct ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_Font_ptr__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_Font_ptr__greater___greater___greater___greater__wrapper : CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > >, bp::wrapper< CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > > > {

    ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_Font_ptr__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_Font_ptr__greater___greater___greater___greater__wrapper(CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > > const & arg )
    : CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > >( arg )
      , bp::wrapper< CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > > >(){
        // copy constructor
        
    }

    virtual ::CEGUI::Font * getCurrentValue(  ) const  {
        if( bp::override func_getCurrentValue = this->get_override( "getCurrentValue" ) )
            return func_getCurrentValue(  );
        else{
            return this->CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > >::getCurrentValue(  );
        }
    }
    
    ::CEGUI::Font * default_getCurrentValue(  ) const  {
        return CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > >::getCurrentValue( );
    }

};

void Iterator_next(::CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > >& t)
{
    t++;
}

void Iterator_previous(::CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > >& t)
{
    t--;
}

void register_FontIterator_class(){

    { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > >
        typedef bp::class_< ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_Font_ptr__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_Font_ptr__greater___greater___greater___greater__wrapper, bp::bases< CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > >, CEGUI::Font* > > > FontIterator_exposer_t;
        FontIterator_exposer_t FontIterator_exposer = FontIterator_exposer_t( "FontIterator", bp::no_init );
        bp::scope FontIterator_scope( FontIterator_exposer );
        { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > >::getCurrentKey
        
            typedef CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > > exported_class_t;
            typedef ::CEGUI::String ( exported_class_t::*getCurrentKey_function_type )(  ) const;
            
            FontIterator_exposer.def( 
                "getCurrentKey"
                , getCurrentKey_function_type( &::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > >::getCurrentKey )
                , "*!\n\
            \n\
                Return the key for the item at the current iterator position.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > >::getCurrentValue
        
            typedef CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > > exported_class_t;
            typedef ::CEGUI::Font * ( exported_class_t::*getCurrentValue_function_type )(  ) const;
            typedef ::CEGUI::Font * ( ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_Font_ptr__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_Font_ptr__greater___greater___greater___greater__wrapper::*default_getCurrentValue_function_type )(  ) const;
            
            FontIterator_exposer.def( 
                "getCurrentValue"
                , getCurrentValue_function_type(&::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > >::getCurrentValue)
                , default_getCurrentValue_function_type(&ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_Font_ptr__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_Font_ptr__greater___greater___greater___greater__wrapper::default_getCurrentValue)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        FontIterator_exposer.def("next", &::Iterator_next);
        FontIterator_exposer.def("previous", &::Iterator_previous);
    }

}
