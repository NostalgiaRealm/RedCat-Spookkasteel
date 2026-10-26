/*
 * FUN_004136fc at 004136fc
 * undefined __register FUN_004136fc(undefined4 param_1, byte * param_2, undefined4 param_3)
 * Address ranges: 004136fc-0041372d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004136fc(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined1 local_c;
  
  FUN_004136f8();
  local_c = 0;
  local_10 = param_3;
  uVar1 = FUN_0040cf28((int)&DAT_00410604,'\x01',param_2,0,&local_10);
  FUN_0040382c(uVar1);
  return;
}

