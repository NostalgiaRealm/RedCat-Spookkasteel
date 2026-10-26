/*
 * FUN_1000b49d at 1000b49d
 * uint __thiscall FUN_1000b49d(void * this, uint param_1, uint param_2)
 * Address ranges: 1000b49d-1000b4d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000b49d(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_1000b4e8(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_1000b57a(uVar1);
  return uVar1;
}

