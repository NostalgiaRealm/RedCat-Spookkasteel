/*
 * FUN_0042c620 at 0042c620
 * undefined FUN_0042c620(void)
 * Address ranges: 0042c620-0042c67d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c620(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *unaff_retaddr;
  int iStack_1c;
  undefined1 local_18 [12];
  float fStack_c;
  
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x48))(local_18);
  uVar1 = *puVar4;
  fVar2 = (float)puVar4[1];
  uVar3 = puVar4[2];
  piVar6 = param_2 + 0x47;
  piVar7 = &iStack_1c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  *unaff_retaddr = uVar1;
  unaff_retaddr[1] = fStack_c * 0.8 + fVar2;
  unaff_retaddr[2] = uVar3;
  return;
}

