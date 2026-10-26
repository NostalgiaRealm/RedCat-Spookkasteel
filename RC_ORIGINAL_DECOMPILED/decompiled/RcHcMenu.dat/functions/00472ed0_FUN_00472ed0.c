/*
 * FUN_00472ed0 at 00472ed0
 * undefined __register FUN_00472ed0(int * param_1, byte param_2)
 * Address ranges: 00472ed0-00473053;0047305b-00473070
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 145 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 145 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00472ed0(int *param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  byte local_9;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_1c = &LAB_00473071;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_9 = param_2;
  local_8 = param_1;
  if ((param_2 & 1) == 0) {
    uStack_24 = 0;
    puStack_28 = (undefined1 *)0x472f5f;
    cVar1 = (**(code **)(*param_1 + 0x1b8))
                      (param_1,*(undefined4 *)(param_1[0x14] + param_1[0x11] * 4),0);
    if (cVar1 != '\0') {
      puStack_28 = (undefined1 *)0x0;
      puStack_2c = (undefined1 *)0x472f81;
      cVar1 = (**(code **)(*local_8 + 0x1b8))
                        (local_8,*(undefined4 *)(local_8[0x14] + local_8[0x11] * 4),1);
      if (cVar1 != '\0') {
        puStack_28 = (undefined1 *)0x0;
        puStack_2c = (undefined1 *)0x472fa3;
        cVar1 = (**(code **)(*local_8 + 0x1b8))
                          (local_8,*(undefined4 *)(local_8[0x14] + local_8[0x11] * 4),2);
        if (cVar1 != '\0') {
          puStack_28 = (undefined1 *)0x472fb2;
          (**(code **)(*local_8 + 0x90))();
          puStack_28 = (undefined1 *)0x472fc1;
          (**(code **)(*local_8 + 0xac))(local_8,2,0);
          *in_FS_OFFSET = uStack_24;
          puStack_1c = &LAB_00473078;
          uStack_20 = 0x473070;
          FUN_00403db0((int *)&local_10);
          return;
        }
      }
    }
  }
  else {
    uStack_24 = 0x472efe;
    puStack_18 = &stack0xfffffffc;
    FUN_00473148((int)param_1);
    uStack_24 = 1;
    puStack_28 = (undefined1 *)0x472f1c;
    cVar1 = (**(code **)(*local_8 + 0x1b8))
                      (local_8,*(undefined4 *)(local_8[0x14] + local_8[0x11] * 4),0);
    if (cVar1 != '\0') {
      puStack_28 = (undefined1 *)0x472f31;
      FUN_00406a48(DAT_005721c4,(int *)&local_10);
      puStack_28 = (undefined1 *)0x472f3c;
      FUN_00466d84(local_10,(int)local_8);
    }
  }
  if ((local_9 & 2) == 0) {
    iVar2 = local_8[0x12];
  }
  else {
    iVar2 = (int)(local_8[0x10] - 1U) >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((local_8[0x10] - 1U & 1) != 0);
    }
  }
  puStack_28 = (undefined1 *)0x472ff2;
  FUN_00473080((int)local_8,local_8[0x11],0);
  puStack_28 = (undefined1 *)0x472ffd;
  (**(code **)(*local_8 + 0x118))();
  puStack_2c = &LAB_00473054;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  for (; 0 < iVar2; iVar2 = iVar2 + -1) {
    cVar1 = (**(code **)(*local_8 + 0x148))();
    if (cVar1 == '\0') break;
  }
  (**(code **)(*local_8 + 0x13c))();
  (**(code **)(*local_8 + 0x144))();
  *in_FS_OFFSET = uStack_30;
  puStack_28 = (undefined1 *)0x47305b;
  puStack_2c = (undefined1 *)0x473053;
  (**(code **)(*local_8 + 0xac))(local_8,2,0);
  return;
}

