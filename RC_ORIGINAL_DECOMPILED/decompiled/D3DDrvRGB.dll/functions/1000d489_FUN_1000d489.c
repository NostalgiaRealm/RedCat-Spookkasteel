/*
 * FUN_1000d489 at 1000d489
 * uint __thiscall FUN_1000d489(void * this, uint param_1, uint param_2)
 * Address ranges: 1000d489-1000d4bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000d489(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_1000d4d4(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_1000d566(uVar1);
  return uVar1;
}

