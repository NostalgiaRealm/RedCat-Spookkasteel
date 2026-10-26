/*
 * FUN_00412288 at 00412288
 * undefined __register FUN_00412288(undefined4 param_1, byte * param_2, undefined4 param_3)
 * Address ranges: 00412288-004122b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412288(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined1 local_c;
  
  FUN_00412284();
  local_c = 0;
  local_10 = param_3;
  uVar1 = FUN_0040cf28((int)&DAT_00410554,'\x01',param_2,0,&local_10);
  FUN_0040382c(uVar1);
  return;
}

