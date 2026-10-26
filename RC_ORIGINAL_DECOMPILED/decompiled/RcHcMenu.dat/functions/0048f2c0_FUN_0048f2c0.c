/*
 * FUN_0048f2c0 at 0048f2c0
 * undefined __register FUN_0048f2c0(int * param_1, int * param_2)
 * Address ranges: 0048f2c0-0048f408
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e3ec slot 2 for TAppInfoPropRefList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e3ec slot 2 for
   TAppInfoPropRefList. Original bytes unchanged; names and types still inferred. */

void FUN_0048f2c0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  char *pcStack_138;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_128 = &LAB_0048f409;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_c = param_2;
  local_8 = param_1;
  FUN_0048ec54(param_1,param_2);
  uVar1 = FUN_0040320c(local_c,(int)&PTR_FUN_0048e3ec);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_0048ec24((int)local_c);
    iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_0048e3ec);
    iVar3 = FUN_0045ba40(*(int *)(iVar3 + 0x20));
    if (iVar2 != iVar3) {
      FUN_00402fe0(*local_8,local_11c);
      FUN_00403fd4(&local_1c,local_11c);
      pcStack_138 = " Internal inconsistency";
      FUN_004040f0(&local_18,3);
      FUN_00403d94(local_18);
    }
    iVar2 = FUN_00403224(local_c,(int)&PTR_FUN_0048e3ec);
    iVar2 = FUN_0045ba40(*(int *)(iVar2 + 0x20));
    uVar4 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_14 = uVar4 + 1;
      local_10 = 0;
      do {
        iVar2 = FUN_00403224(local_c,(int)&PTR_FUN_0048e3ec);
        piVar5 = (int *)(**(code **)**(undefined4 **)(iVar2 + 0x20))
                                  (*(undefined4 **)(iVar2 + 0x20),local_10);
        uVar1 = FUN_00403224(piVar5,(int)&PTR_FUN_0048e384);
        piVar5 = (int *)(*(code *)**(undefined4 **)local_8[8])((undefined4 *)local_8[8],local_10);
        piVar5 = (int *)FUN_00403224(piVar5,(int)&PTR_FUN_0048e384);
        (**(code **)(*piVar5 + 8))(piVar5,uVar1);
        local_10 = local_10 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  *in_FS_OFFSET = pcStack_138;
  FUN_00403dd4(&local_1c,2);
  return;
}

