/*
 * FUN_004236b0 at 004236b0
 * undefined FUN_004236b0(void)
 * Address ranges: 004236b0-004236fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004236b0(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *unaff_retaddr;
  undefined1 auStack_c [12];
  
  piVar4 = (int *)(**(code **)(*param_1 + 0xa4))();
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x48))(auStack_c);
  fVar2 = (float)puVar5[1];
  uVar3 = puVar5[2];
  fVar1 = (float)param_1[0x41];
  *unaff_retaddr = *puVar5;
  unaff_retaddr[1] = fVar2 + fVar1;
  unaff_retaddr[2] = uVar3;
  return;
}

