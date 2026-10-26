/*
 * FUN_0046794c at 0046794c
 * undefined __register FUN_0046794c(int * param_1, int * param_2)
 * Address ranges: 0046794c-00467a53;00467a5b-00467a6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4620c0 slot 2 for TFieldDef. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4620c0 slot 2 for
   TFieldDef. Original bytes unchanged; names and types still inferred. */

void FUN_0046794c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_EDX;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x467967;
  uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_004620c0);
  if ((char)uVar2 != '\0') {
    if ((int *)param_1[1] != (int *)0x0) {
      puStack_1c = (undefined1 *)0x46797e;
      (**(code **)(*(int *)param_1[1] + 0x14))();
    }
    puStack_20 = &LAB_00467a54;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x14))(param_1,param_2[3]);
    FUN_00467810((int)param_1,
                 CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)((int)param_2 + 0x21)));
    uVar2 = FUN_00467870((int)param_2);
    FUN_00467894((int)param_1,uVar2);
    FUN_00467830((int)param_1,param_2[5]);
    FUN_004677fc((int)param_1,*(undefined1 *)((int)param_2 + 0x22));
    *(char *)(param_1 + 8) = (char)param_2[8];
    uVar2 = FUN_00467918((int)param_1);
    if ((char)uVar2 != '\0') {
      piVar3 = (int *)FUN_004678e0(param_1);
      FUN_00412f38(piVar3);
    }
    uVar2 = FUN_00467918((int)param_2);
    if ((char)uVar2 != '\0') {
      iVar4 = FUN_004678e0(param_2);
      iVar4 = FUN_0041300c(iVar4);
      if (-1 < iVar4 + -1) {
        iVar6 = 0;
        do {
          piVar3 = (int *)FUN_00467938(param_1);
          iVar5 = FUN_004678e0(param_2);
          uVar2 = FUN_00467ef4(iVar5,iVar6);
          (**(code **)(*piVar3 + 8))(piVar3,uVar2);
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    puVar1 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x467a65;
    piVar3 = (int *)param_1[1];
    if (piVar3 != (int *)0x0) {
      puStack_20 = (undefined1 *)0x467a53;
      (**(code **)(*piVar3 + 0x18))(piVar3,*piVar3,puVar1);
    }
    return;
  }
  puStack_1c = (undefined1 *)0x467a65;
  FUN_00412a74(param_1,param_2);
  return;
}

