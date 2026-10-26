/*
 * FUN_004313cc at 004313cc
 * undefined __register FUN_004313cc(int * param_1)
 * Address ranges: 004313cc-00431450;00431458-00431471
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004313cc(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (param_1[0x16] == 0) {
    puStack_10 = (undefined1 *)0x4313e5;
    FUN_0041cfe8();
  }
  else {
    if (param_1[0x17] == 0) {
      puStack_10 = (undefined1 *)0x4313fd;
      piVar1 = (int *)FUN_00412824(DAT_0057378c);
      puStack_14 = &LAB_00431451;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_10 = &stack0xfffffffc;
      if (3 < piVar1[2]) {
        puStack_10 = &stack0xfffffffc;
        FUN_00431238();
      }
      iVar2 = (**(code **)(*(int *)param_1[0x16] + 0x44))((int *)param_1[0x16],param_1 + 0x18);
      param_1[0x17] = iVar2;
      FUN_004121d8(piVar1,(int)param_1);
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x431458;
      puStack_14 = (undefined1 *)0x431450;
      FUN_00412888(DAT_0057378c);
      return;
    }
    puStack_10 = (undefined1 *)0x431466;
    FUN_0041cfec(param_1,param_1[0x17]);
    puStack_10 = (undefined1 *)0x43146e;
    FUN_004314c0((int)param_1);
  }
  return;
}

