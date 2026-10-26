/*
 * FUN_00484d84 at 00484d84
 * int __register FUN_00484d84(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 00484d84-00484ee4;00484eec-00484ef4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 137 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 137 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

int FUN_00484d84(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *in_FS_OFFSET;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  local_10 = 0;
  iVar1 = param_1[0x1c];
  local_c = param_2;
  local_8 = param_1;
  if (iVar1 < 1) {
    uStack_24 = 0x484dd7;
    bVar2 = FUN_0048493c(param_1,&local_14);
    if (!bVar2) {
      return local_10;
    }
  }
  else {
    local_14 = param_1[0x7e] * (uint)*(ushort *)(param_1 + 0x7a) + param_1[0x82];
  }
  uStack_24 = 1;
  uStack_28 = CONCAT22((short)((uint)unaff_ESI >> 0x10),(undefined2)local_c);
  iStack_2c = local_14;
  iStack_30 = local_8[0x5a];
  puStack_34 = (undefined1 *)0x484df9;
  sVar3 = thunk_FUN_00479ad6(iStack_30);
  if (sVar3 == 0) {
    puStack_38 = &LAB_00484ee5;
    iStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_3c;
    puStack_34 = &stack0xfffffffc;
    sVar3 = thunk_FUN_00479ad0(local_8[0x5a]);
    if ((sVar3 == 0) && (local_10 != 0)) {
      iVar4 = FUN_00406298(*param_3);
      if (iVar4 <= local_10) {
        FUN_00406454(param_3,(int)&LAB_00466574,1);
      }
      iVar4 = local_8[0x5a];
      sVar3 = thunk_FUN_00479aca(iVar4);
      *in_FS_OFFSET = iVar4;
      if (sVar3 != 0) {
        local_10 = 0;
      }
      iVar4 = thunk_FUN_00479ab8(local_8[0x5a]);
      if (iVar1 == 0) {
        iVar4 = FUN_0047fe48(CONCAT22((short)((uint)iVar4 >> 0x10),sVar3));
      }
      return iVar4;
    }
    FUN_004038cc();
  }
  return local_10;
}

