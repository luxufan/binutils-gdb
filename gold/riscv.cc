// riscv.cc -- riscv target support for gold.

// Copyright (C) 2014-2022 Free Software Foundation, Inc.
// Written by Jing Yu <jingyu@google.com> and Han Shen <shenhan@google.com>.

// This file is part of gold.

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston,
// MA 02110-1301, USA.

#include "gold.h"
#include "elfcpp.h"
#include "target-select.h"
#include "target.h"

namespace gold
{

template <int size, bool big_endian>
class Target_riscv : public Sized_target<size, big_endian>
{
 public:
  static const Target::Target_info riscv_info;

  Target_riscv(const Target::Target_info* info = &riscv_info)
      : Sized_target<size, big_endian>(info) {}


  // Process the relocs for a section, and record information of the
  // mapping from source to destination sections. This mapping is later
  // used to determine unreferenced garbage sections. This procedure is
  // only called during garbage collection.
  void
  gc_process_relocs(Symbol_table* symtab,
		    Layout* layout,
		    Sized_relobj_file<size, big_endian>* object,
		    unsigned int data_shndx,
		    unsigned int sh_type,
		    const unsigned char* prelocs,
		    size_t reloc_count,
		    Output_section* output_section,
		    bool needs_special_offset_handling,
		    size_t local_symbol_count,
            const unsigned char* plocal_symbols)
{(void)symtab;
 (void)layout;
 (void)object;
 (void)data_shndx;
 (void)sh_type;
 (void)prelocs;
 (void)reloc_count;
 (void)output_section;
 (void)needs_special_offset_handling;
 (void)local_symbol_count;
 (void)plocal_symbols;
}


  // Scan the relocs for a section, and record any information
  // required for the symbol.  SYMTAB is the symbol table.  OBJECT is
  // the object in which the section appears.  DATA_SHNDX is the
  // section index that these relocs apply to.  SH_TYPE is the type of
  // the relocation section, SHT_REL or SHT_RELA.  PRELOCS points to
  // the relocation data.  RELOC_COUNT is the number of relocs.
  // LOCAL_SYMBOL_COUNT is the number of local symbols.
  // OUTPUT_SECTION is the output section.
  // NEEDS_SPECIAL_OFFSET_HANDLING is true if offsets to the output
  // sections are not mapped as usual.  PLOCAL_SYMBOLS points to the
  // local symbol data from OBJECT.  GLOBAL_SYMBOLS is the array of
  // pointers to the global symbol table from OBJECT.
  void
  scan_relocs(Symbol_table* symtab,
	      Layout* layout,
	      Sized_relobj_file<size, big_endian>* object,
	      unsigned int data_shndx,
	      unsigned int sh_type,
	      const unsigned char* prelocs,
	      size_t reloc_count,
	      Output_section* output_section,
	      bool needs_special_offset_handling,
	      size_t local_symbol_count,
	      const unsigned char* plocal_symbols)
{
  (void)symtab;
  (void)layout;
  (void)object;
  (void)data_shndx;
  (void)sh_type;
  (void)prelocs;
  (void)reloc_count;
  (void)output_section;
  (void)needs_special_offset_handling;
  (void)local_symbol_count;
  (void)plocal_symbols;
}


  // Relocate section data.  SH_TYPE is the type of the relocation
  // section, SHT_REL or SHT_RELA.  PRELOCS points to the relocation
  // information.  RELOC_COUNT is the number of relocs.
  // OUTPUT_SECTION is the output section.
  // NEEDS_SPECIAL_OFFSET_HANDLING is true if offsets must be mapped
  // to correspond to the output section.  VIEW is a view into the
  // output file holding the section contents, VIEW_ADDRESS is the
  // virtual address of the view, and VIEW_SIZE is the size of the
  // view.  If NEEDS_SPECIAL_OFFSET_HANDLING is true, the VIEW_xx
  // parameters refer to the complete output section data, not just
  // the input section data.
  void
  relocate_section(const Relocate_info<size, big_endian>* relinfo,
		   unsigned int sh_type,
		   const unsigned char* prelocs,
		   size_t reloc_count,
		   Output_section* output_section,
		   bool needs_special_offset_handling,
		   unsigned char* view,
		   typename elfcpp::Elf_types<size>::Elf_Addr view_address,
		   section_size_type view_size,
		   const Reloc_symbol_changes* reloc_symbol_changes)
{
  (void)relinfo;
  (void)sh_type;
  (void)prelocs;
  (void)reloc_count;
  (void)output_section;
  (void)needs_special_offset_handling;
  (void)view;
  (void)view_address;
  (void)view_size;
  (void)reloc_symbol_changes;

}

  // Scan the relocs during a relocatable link.  The parameters are
  // like scan_relocs, with an additional Relocatable_relocs
  // parameter, used to record the disposition of the relocs.
  void
  scan_relocatable_relocs(Symbol_table* symtab,
			  Layout* layout,
			  Sized_relobj_file<size, big_endian>* object,
			  unsigned int data_shndx,
			  unsigned int sh_type,
			  const unsigned char* prelocs,
			  size_t reloc_count,
			  Output_section* output_section,
			  bool needs_special_offset_handling,
			  size_t local_symbol_count,
			  const unsigned char* plocal_symbols,
			  Relocatable_relocs* rr)
{
  (void)symtab;
  (void)layout;
  (void)object;
  (void)data_shndx;
  (void)sh_type;
  (void)prelocs;
  (void)reloc_count;
  (void)output_section;
  (void)needs_special_offset_handling;
  (void)local_symbol_count;
  (void)plocal_symbols;
  (void)rr;
}

  // Scan the relocs for --emit-relocs.  The parameters are
  // like scan_relocatable_relocs.
  void
  emit_relocs_scan(Symbol_table* symtab,
		   Layout* layout,
		   Sized_relobj_file<size, big_endian>* object,
		   unsigned int data_shndx,
		   unsigned int sh_type,
		   const unsigned char* prelocs,
		   size_t reloc_count,
		   Output_section* output_section,
		   bool needs_special_offset_handling,
		   size_t local_symbol_count,
		   const unsigned char* plocal_syms,
		   Relocatable_relocs* rr)
{
  (void)symtab;
  (void)layout;
  (void)object;
  (void)data_shndx;
  (void)sh_type;
  (void)prelocs;
  (void)reloc_count;
  (void)output_section;
  (void)needs_special_offset_handling;
  (void)local_symbol_count;
  (void)plocal_syms;
  (void)rr;
}

  // Emit relocations for a section during a relocatable link, and for
  // --emit-relocs.  The parameters are like relocate_section, with
  // additional parameters for the view of the output reloc section.
  void
  relocate_relocs(const Relocate_info<size, big_endian>* relinfo,
		  unsigned int sh_type,
		  const unsigned char* prelocs,
		  size_t reloc_count,
		  Output_section* output_section,
		  typename elfcpp::Elf_types<size>::Elf_Off
                    offset_in_output_section,
		  unsigned char* view,
		  typename elfcpp::Elf_types<size>::Elf_Addr view_address,
		  section_size_type view_size,
		  unsigned char* reloc_view,
          section_size_type reloc_view_size)
{
  (void)relinfo;
  (void)sh_type;
  (void)prelocs;
  (void)reloc_count;
  (void)output_section;
  (void)offset_in_output_section;
  (void)view;
  (void)view_address;
  (void)view_size;
  (void)reloc_view;
  (void)reloc_view_size;
}
};

template<>
const Target::Target_info Target_riscv<32, false>::riscv_info =
{
  32,			// size
  false,		// is_big_endian
  elfcpp::EM_RISCV,	// machine_code
  false,		// has_make_symbol
  false,		// has_resolve
  false,		// has_code_fill
  false,		// is_default_stack_executable
  false,		// can_icf_inline_merge_sections
  '\0',			// wrap_char
  "",	// program interpreter
  0x400000,		// default_text_segment_address
  0x10000,		// abi_pagesize (overridable by -z max-page-size)
  0x1000,		// common_pagesize (overridable by -z common-page-size)
  false,                // isolate_execinstr
  0,                    // rosegment_gap
  elfcpp::SHN_UNDEF,	// small_common_shndx
  elfcpp::SHN_UNDEF,	// large_common_shndx
  0,			// small_common_section_flags
  0,			// large_common_section_flags
  NULL,			// attributes_section
  NULL,			// attributes_vendor
  "_start",		// entry_symbol_name
  32,			// hash_entry_size
  elfcpp::SHT_PROGBITS,	// unwind_section_type

};

template<>
const Target::Target_info Target_riscv<32, true>::riscv_info =
{
  32,			// size
  true,		// is_big_endian
  elfcpp::EM_RISCV,	// machine_code
  false,		// has_make_symbol
  false,		// has_resolve
  false,		// has_code_fill
  false,		// is_default_stack_executable
  false,		// can_icf_inline_merge_sections
  '\0',			// wrap_char
  "",	// program interpreter
  0x400000,		// default_text_segment_address
  0x10000,		// abi_pagesize (overridable by -z max-page-size)
  0x1000,		// common_pagesize (overridable by -z common-page-size)
  false,                // isolate_execinstr
  0,                    // rosegment_gap
  elfcpp::SHN_UNDEF,	// small_common_shndx
  elfcpp::SHN_UNDEF,	// large_common_shndx
  0,			// small_common_section_flags
  0,			// large_common_section_flags
  NULL,			// attributes_section
  NULL,			// attributes_vendor
  "_start",		// entry_symbol_name
  32,			// hash_entry_size
  elfcpp::SHT_PROGBITS,	// unwind_section_type

};

template<>
const Target::Target_info Target_riscv<64, false>::riscv_info =
{
  64,			// size
  false,		// is_big_endian
  elfcpp::EM_RISCV,	// machine_code
  false,		// has_make_symbol
  false,		// has_resolve
  false,		// has_code_fill
  false,		// is_default_stack_executable
  false,		// can_icf_inline_merge_sections
  '\0',			// wrap_char
  "",	// program interpreter
  0x400000,		// default_text_segment_address
  0x10000,		// abi_pagesize (overridable by -z max-page-size)
  0x1000,		// common_pagesize (overridable by -z common-page-size)
  false,                // isolate_execinstr
  0,                    // rosegment_gap
  elfcpp::SHN_UNDEF,	// small_common_shndx
  elfcpp::SHN_UNDEF,	// large_common_shndx
  0,			// small_common_section_flags
  0,			// large_common_section_flags
  NULL,			// attributes_section
  NULL,			// attributes_vendor
  "_start",		// entry_symbol_name
  64,			// hash_entry_size
  elfcpp::SHT_PROGBITS,	// unwind_section_type

};

template<>
const Target::Target_info Target_riscv<64, true>::riscv_info =
{
  64,			// size
  true,		// is_big_endian
  elfcpp::EM_RISCV,	// machine_code
  false,		// has_make_symbol
  false,		// has_resolve
  false,		// has_code_fill
  false,		// is_default_stack_executable
  false,		// can_icf_inline_merge_sections
  '\0',			// wrap_char
  "",	// program interpreter
  0x400000,		// default_text_segment_address
  0x10000,		// abi_pagesize (overridable by -z max-page-size)
  0x1000,		// common_pagesize (overridable by -z common-page-size)
  false,                // isolate_execinstr
  0,                    // rosegment_gap
  elfcpp::SHN_UNDEF,	// small_common_shndx
  elfcpp::SHN_UNDEF,	// large_common_shndx
  0,			// small_common_section_flags
  0,			// large_common_section_flags
  NULL,			// attributes_section
  NULL,			// attributes_vendor
  "_start",		// entry_symbol_name
  64,			// hash_entry_size
  elfcpp::SHT_PROGBITS,	// unwind_section_type
};

template<int size, bool big_endian>
class Target_selector_riscv : public Target_selector
{
 public:
  Target_selector_riscv();

 virtual Target *
 do_instantiate_target()
 { return new Target_riscv<size, big_endian>(); }

};

template<>
Target_selector_riscv<32, false>::Target_selector_riscv()
    : Target_selector(elfcpp::EM_RISCV, 32, false,
                      "elf32-littleriscv", nullptr)
{ }
template<>
Target_selector_riscv<32, true>::Target_selector_riscv()
    : Target_selector(elfcpp::EM_RISCV, 32, true,
                      "elf32-littleriscv", nullptr)
{ }

template<>
Target_selector_riscv<64, false>::Target_selector_riscv()
    : Target_selector(elfcpp::EM_RISCV, 64, false,
                      "elf64-littleriscv", nullptr)
{ }

template<>
Target_selector_riscv<64, true>::Target_selector_riscv()
    : Target_selector(elfcpp::EM_RISCV, 64, true,
                      "elf64-littleriscv", nullptr)
{ }

Target_selector_riscv<32, true> target_selector_riscvelf32b;
Target_selector_riscv<32, false> target_selector_riscvelf32;

Target_selector_riscv<64, true> target_selector_riscvelf64b;
Target_selector_riscv<64, false> target_selector_riscvelf64;

} // namespace gold
