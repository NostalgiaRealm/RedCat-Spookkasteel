/*
 * FUN_0048a96c at 0048a96c
 * undefined __register FUN_0048a96c(int * param_1, int * param_2)
 * Address ranges: 0048a96c-0048aaaa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48a74c slot 0 for TFKStringPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48a74c slot 0 for
   TFKStringPropDesc. Original bytes unchanged; names and types still inferred. */

void FUN_0048a96c(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_FS_OFFSET;
  int *piVar5;
  undefined4 *local_34;
  byte *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  int local_1c;
  undefined1 local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_14 = 0;
  local_34 = (undefined4 *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (byte *)0x0;
  local_10 = 0;
  piVar5 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xfffffec0;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_2 + 0x50))();
  if ((cVar1 == '\0') && (0 < local_8[0x12])) {
    piVar2 = (int *)FUN_00403224(local_c,(int)&LAB_0048a7d0);
    (**(code **)(*piVar2 + 0x6c))(piVar2,&local_10);
    iVar3 = FUN_00404030(local_10);
    if (local_8[0x12] < iVar3) {
      piVar5 = &local_14;
      FUN_004966b4(local_c,&local_28);
      local_24 = local_28;
      local_20 = 0xb;
      iVar3 = FUN_00496d84((int)local_c);
      FUN_00409804(*(undefined **)(iVar3 + 0x24),&local_2c);
      local_1c = local_2c;
      local_18 = 0xb;
      FUN_00406a48((undefined4 *)&LAB_0048a864,(int *)&local_30);
      FUN_0040a894(local_30,&local_24,1,piVar5);
      iVar3 = local_14;
      piVar2 = (int *)FUN_00495ee0((int)local_c);
      piVar5 = local_c;
      FUN_00402fe0(*local_8,&stack0xfffffecc);
      FUN_00403fd4((int *)&local_34,&stack0xfffffecc);
      uVar4 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',local_34,(int)piVar5,piVar2,
                           (undefined4 *)0x0,iVar3,(undefined4 *)"DoValidate");
      FUN_0040382c(uVar4);
    }
  }
  *in_FS_OFFSET = (int)piVar5;
  FUN_00403dd4((int *)&local_34,4);
  FUN_00403dd4(&local_14,2);
  return;
}

