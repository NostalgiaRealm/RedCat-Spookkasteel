/*
 * FUN_00418e94 at 00418e94
 * undefined __register FUN_00418e94(int param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 00418e94-00418ecd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418e94(int param_1,undefined4 *param_2,uint param_3)

{
  uint local_c;
  
  local_c = param_3;
  FUN_00418ed0(param_1,0x12,param_3);
  local_c = FUN_004045c8((int)param_2);
  FUN_00417624(param_1,&local_c,4);
  FUN_00417624(param_1,param_2,local_c * 2);
  return;
}

