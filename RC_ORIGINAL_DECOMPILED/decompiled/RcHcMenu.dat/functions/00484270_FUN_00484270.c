/*
 * FUN_00484270 at 00484270
 * undefined __register FUN_00484270(int * param_1)
 * Address ranges: 00484270-0048440d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 121 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 121 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00484270(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  undefined2 local_95;
  ushort local_8b;
  int local_87;
  undefined1 uStack_7d;
  short local_37;
  
  if (*(char *)((int)param_1 + 0x1b2) != '\0') {
    uVar4 = thunk_FUN_00478e2a(param_1 + 0x5a);
    FUN_0047fe48(uVar4);
  }
  thunk_FUN_00479cbe(param_1[0x5a]);
  *(undefined2 *)(param_1 + 0x7a) = local_95;
  param_1[0x16] = (uint)local_8b;
  if ((local_87 == 0) && (local_37 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x6d) = uVar2;
  uVar5 = FUN_00486780((int)param_1);
  if ((char)uVar5 != '\0') {
    cVar3 = (**(code **)(*param_1 + 0x124))();
    if (cVar3 != '\0') {
      cVar3 = '\x01';
      goto LAB_004842fb;
    }
  }
  cVar3 = '\0';
LAB_004842fb:
  *(char *)((int)param_1 + 0x1f2) = cVar3;
  if (cVar3 != '\0') {
    uVar4 = thunk_FUN_00478c5f(param_1 + 0x5a);
    FUN_0047fe48(uVar4);
  }
  *(undefined1 *)(param_1 + 0x77) = uStack_7d;
  piVar1 = (int *)param_1[0xb];
  *(undefined1 *)(piVar1 + 8) = 0;
  FUN_00467f10(piVar1);
  FUN_004859a8((int)param_1);
  uVar5 = extraout_ECX;
  uVar7 = extraout_EDX;
  if (*(char *)((int)param_1 + 0x96) != '\0') {
    (**(code **)(*param_1 + 0xa0))();
    uVar5 = extraout_ECX_00;
    uVar7 = extraout_EDX_00;
  }
  FUN_00471d20((int)param_1,CONCAT31((int3)((uint)uVar7 >> 8),1),uVar5);
  if (*(char *)((int)param_1 + 0x99) != '\0') {
    FUN_0048415c(param_1,param_1[9]);
  }
  FUN_004844dc((int)param_1,'\0');
  if (*(char *)((int)param_1 + 0x1b2) != '\0') {
    FUN_00486abc((int)param_1,'\x01');
    uVar5 = FUN_00486b98((int)param_1);
    FUN_00486d94((int)param_1,(char)uVar5);
  }
  FUN_00485a38((int)param_1);
  thunk_FUN_00479cac(param_1[0x5a]);
  (**(code **)(*param_1 + 0x260))();
  if (param_1[0x1b] != 0) {
    iVar6 = FUN_00485d68((int)param_1,(undefined4 *)param_1[0x1b],(char)param_1[0x23]);
    param_1[0x61] = iVar6;
  }
  if (*(short *)((int)param_1 + 0x15a) != 0) {
    iVar6 = FUN_00485dfc((int)param_1);
    param_1[0x62] = iVar6;
  }
  if ((char)param_1[0x26] != '\0') {
    FUN_00485c6c((int)param_1);
  }
  return;
}

