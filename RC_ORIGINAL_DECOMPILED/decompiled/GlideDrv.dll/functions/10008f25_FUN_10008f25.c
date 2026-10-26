/*
 * FUN_10008f25 at 10008f25
 * uint __thiscall FUN_10008f25(void * this, uint param_1, uint param_2)
 * Address ranges: 10008f25-10008f59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10008f25(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10008f70(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10009002(uVar1);
  return uVar1;
}

