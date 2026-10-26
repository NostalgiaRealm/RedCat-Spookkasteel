/*
 * FUN_00421850 at 00421850
 * undefined __register FUN_00421850(int * param_1, short param_2, HBITMAP param_3, HPALETTE param_4)
 * Address ranges: 00421850-004218d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00421850(int *param_1,short param_2,HBITMAP param_3,HPALETTE param_4)

{
  int iVar1;
  undefined4 local_58 [5];
  int local_44;
  undefined4 local_40;
  
  if ((param_2 != 2) || (param_3 == (HBITMAP)0x0)) {
    FUN_0041d22c((undefined4 *)PTR_PTR_00572410);
  }
  FUN_00421638((int)param_1);
  FUN_00402cfc(local_58,0x54,0);
  GetObjectA(param_3,0x54,local_58);
  if (local_44 == 0) {
    local_40 = 0;
  }
  FUN_004210b8((int)param_1,param_3,param_4,local_58);
  *(undefined1 *)(param_1[8] + 0x70) = 0;
  iVar1 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar1 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

