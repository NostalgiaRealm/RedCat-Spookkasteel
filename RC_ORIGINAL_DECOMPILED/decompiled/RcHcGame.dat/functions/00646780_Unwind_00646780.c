/*
 * Unwind@00646780 at 00646780
 * undefined Unwind@00646780(void)
 * Address ranges: 00646780-00646796
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Unwind_00646780(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    std::locale::~locale(*(locale **)(unaff_EBP + 4));
    return;
  }
  return;
}

