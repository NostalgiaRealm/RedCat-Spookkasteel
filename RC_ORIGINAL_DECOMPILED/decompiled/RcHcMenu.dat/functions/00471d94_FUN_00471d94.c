/*
 * FUN_00471d94 at 00471d94
 * undefined __register FUN_00471d94(int * param_1, int param_2, int * param_3)
 * Address ranges: 00471d94-00471e3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 137 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 137 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00471d94(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x471dac;
  piVar1 = (int *)FUN_004720fc((int)param_1,param_2);
  puStack_1c = (undefined1 *)0x471db7;
  uVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_00464b88);
  puStack_1c = (undefined1 *)0x471dc5;
  piVar1 = (int *)(**(code **)(*param_1 + 0x210))(param_1,uVar2,0);
  puStack_20 = &LAB_00471e3c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  iVar3 = FUN_004147cc(piVar1);
  if (0 < iVar3) {
    iVar4 = FUN_00406298(*param_3);
    if (iVar4 <= iVar3) {
      FUN_00406454(param_3,(int)&LAB_00466574,1);
    }
    (**(code **)(*piVar1 + 4))(piVar1,*param_3,iVar3);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00471e43;
  puStack_20 = (undefined1 *)0x471e3b;
  FUN_00403094(piVar1);
  return;
}

