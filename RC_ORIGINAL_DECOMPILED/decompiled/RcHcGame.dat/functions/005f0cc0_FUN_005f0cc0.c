/*
 * FUN_005f0cc0 at 005f0cc0
 * undefined FUN_005f0cc0(void)
 * Address ranges: 005f0cc0-005f0dca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005f0cc0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 local_18 [8];
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  
  iVar6 = *(int *)(param_1 + 8);
  iVar1 = 0;
  if (iVar6 == *(int *)(param_1 + 0xc)) {
    return param_2;
  }
  do {
    puVar2 = (undefined4 *)FUN_00600f29(local_18,4);
    if (param_2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*param_2 + 4) + (int)param_2;
    }
    (*(code *)*puVar2)(iVar5,puVar2[1]);
    *(undefined1 *)(*(int *)(*param_2 + 4) + 0x30 + (int)param_2) = 0x30;
    puVar2 = (undefined4 *)FUN_00600efc(auStack_10,0x80);
    if (param_2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*param_2 + 4) + (int)param_2;
    }
    (*(code *)*puVar2)(iVar5,puVar2[1]);
    puVar7 = &DAT_006b13a8;
    uVar3 = FUN_005e7140(iVar1);
    piVar4 = (int *)FUN_005e5d20(uVar3,puVar7);
    puVar2 = (undefined4 *)FUN_00600edb(auStack_8,0x80);
    if (piVar4 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*piVar4 + 4) + (int)piVar4;
    }
    (*(code *)*puVar2)(iVar5,puVar2[1]);
    *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30 + (int)piVar4) = 0x20;
    FUN_005f7780(param_2);
    FUN_005e5d20(param_2,&DAT_006a90d0);
    iVar6 = iVar6 + 4;
    iVar1 = iVar1 + 1;
  } while (iVar6 != *(int *)(param_1 + 0xc));
  return param_2;
}

