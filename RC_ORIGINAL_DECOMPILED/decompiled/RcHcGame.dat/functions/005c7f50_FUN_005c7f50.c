/*
 * FUN_005c7f50 at 005c7f50
 * undefined FUN_005c7f50(void)
 * Address ranges: 005c7f50-005c7fee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_005c7f50(int param_1,undefined4 param_2,float param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_5;
  local_8 = param_4;
  local_c = (*(float *)(param_1 + 8) - 1.0) + param_3;
  if (0.0 <= local_c) {
    if (1.0 < local_c) {
      return 0;
    }
  }
  else {
    local_c = 0.0;
  }
  iVar1 = FUN_005c89f0(*(undefined4 *)(param_1 + 4),param_2,&local_c,param_6,&param_4);
  if (iVar1 == 0) {
    FUN_005cf220(0xb,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x15e,&DAT_006b3f70,0
                );
  }
  return param_4;
}

