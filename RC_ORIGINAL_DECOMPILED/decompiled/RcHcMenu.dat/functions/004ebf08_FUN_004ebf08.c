/*
 * FUN_004ebf08 at 004ebf08
 * undefined __register FUN_004ebf08(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 004ebf08-004ebf08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x4ea3e8 slot 14 for TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x4ea3e8
   slot 14 for TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred.
    */

void FUN_004ebf08(int *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  byte abStack_11c [256];
  int iStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  undefined1 uStack_d;
  int *piStack_c;
  int *piStack_8;
  
  puStack_134 = &stack0xfffffffc;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  iStack_1c = 0;
  puStack_138 = &LAB_004ec06a;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  piStack_14 = (int *)0x0;
  uStack_d = 0;
  puStack_140 = (undefined1 *)0x4ebf57;
  uStack_18 = param_2;
  piStack_c = param_3;
  piStack_8 = param_1;
  iVar2 = FUN_00496d84((int)param_3);
  if ((*(byte *)(iVar2 + 0x18) & 8) == 0) {
    puStack_140 = (undefined1 *)0x4ebf6d;
    FUN_00402fe0(*piStack_8,abStack_11c);
    puStack_140 = (undefined1 *)0x4ebf7b;
    FUN_00403fd4(&iStack_1c,abStack_11c);
    puStack_140 = (undefined1 *)0x4ebf88;
    FUN_00404038(&iStack_1c,(undefined4 *)".GetAutoIncs: AppProp not an AutoInc-Field");
    puStack_140 = &LAB_004ebf9a;
    FUN_00403d94(iStack_1c);
  }
  puStack_144 = &LAB_004ec042;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  puStack_140 = &stack0xfffffffc;
  FUN_00459af0(-0x11);
  piVar3 = (int *)FUN_004cf3c8(piStack_8,'\0');
  piStack_14 = (int *)FUN_00403224(piVar3,(int)&PTR_FUN_004ea51c);
  (**(code **)(*piStack_14 + 100))();
  (**(code **)(*piStack_14 + 0x60))(piStack_14,"SELECT @@Identity");
  FUN_004d5dc0(piStack_14);
  cVar1 = (**(code **)(*piStack_14 + 0x3c))();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_00468730(*(int *)(piStack_14[0xc] + 0x24),0);
    (**(code **)(*piVar3 + 0x5c))(piVar3,&uStack_12c);
    FUN_004964d0(piStack_c,&uStack_12c);
    uStack_d = 1;
  }
  FUN_004d516c(piStack_14);
  *in_FS_OFFSET = uStack_148;
  puStack_140 = &LAB_004ec049;
  puStack_144 = (undefined1 *)0x4ec03c;
  FUN_00403094(piStack_14);
  puStack_144 = (undefined1 *)0x4ec041;
  FUN_00459b04();
  return;
}

