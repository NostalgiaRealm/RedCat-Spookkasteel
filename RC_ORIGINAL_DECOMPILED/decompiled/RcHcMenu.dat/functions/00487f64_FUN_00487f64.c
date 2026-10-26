/*
 * FUN_00487f64 at 00487f64
 * undefined __register FUN_00487f64(int * param_1, undefined4 param_2, int param_3)
 * Address ranges: 00487f64-00488066;0048806e-00488090
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 30 for TDBDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 30 for
   TDBDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00487f64(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 *local_1c;
  int local_18;
  int *local_14;
  undefined4 *local_10;
  char local_9;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_10 = (undefined4 *)0x0;
  puStack_2c = &LAB_00488091;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x487f98;
  local_8 = param_3;
  local_9 = FUN_00487180((int)param_1,param_2,param_3);
  if ((local_9 == '\0') && (param_1[0x84] != 0)) {
    puStack_34 = (undefined1 *)0x487fc3;
    uVar1 = FUN_0040320c((int *)param_1[0x84],(int)&PTR_FUN_0047dbe4);
    if ((char)uVar1 != '\0') {
      puStack_34 = (undefined1 *)0x487fd8;
      piVar2 = (int *)(**(code **)(*(int *)param_1[0x84] + 0x3c))((int *)param_1[0x84],param_2);
      puStack_34 = (undefined1 *)0x487fe0;
      (**(code **)(*piVar2 + 0x1c))(piVar2,&local_10);
      if (local_10 != (undefined4 *)0x0) {
        puStack_34 = (undefined1 *)0x487ff6;
        local_14 = FUN_0046f014((int *)&PTR_FUN_004663b4,'\x01',extraout_ECX);
        puStack_38 = &LAB_00488067;
        uStack_3c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_3c;
        puStack_34 = &stack0xfffffffc;
        FUN_0046f674(local_14,local_10,'\x01',&local_18);
        FUN_00487e18(local_8,(int)local_14);
        iVar3 = (**(code **)(*param_1 + 0x38))(param_1,local_10,local_14);
        if (iVar3 == 0) {
          FUN_00406a48((undefined4 *)PTR_LAB_00572368,(int *)&local_1c);
          FUN_00466d84(local_1c,0);
        }
        local_9 = 1;
        *in_FS_OFFSET = 0;
        uStack_3c = 0x48806e;
        FUN_00403094(local_14);
        return;
      }
    }
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00488098;
  puStack_2c = (undefined1 *)0x488088;
  FUN_00403dd4((int *)&local_1c,2);
  puStack_2c = (undefined1 *)0x488090;
  FUN_00403db0((int *)&local_10);
  return;
}

