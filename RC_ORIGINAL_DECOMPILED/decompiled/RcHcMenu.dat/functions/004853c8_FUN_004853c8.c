/*
 * FUN_004853c8 at 004853c8
 * undefined __register FUN_004853c8(int param_1, int * param_2, int * param_3)
 * Address ranges: 004853c8-0048543e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004853c8(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined2 *puStack_424;
  undefined4 uStack_420;
  undefined1 *puStack_41c;
  undefined1 auStack_418 [2];
  undefined2 uStack_416;
  undefined1 *puStack_414;
  undefined1 auStack_410 [1028];
  
  puStack_41c = (undefined1 *)0x4853de;
  iVar1 = (**(code **)(*param_2 + 0x74))();
  if (iVar1 < 1) {
    puStack_41c = (undefined1 *)0x485435;
    FUN_004717ac(param_1,(int)param_2,param_3);
  }
  else {
    puStack_41c = (undefined1 *)0x4853e9;
    uStack_416 = (**(code **)(*param_2 + 0x74))();
    puStack_414 = auStack_410;
    uStack_420 = 0x401;
    puStack_424 = &uStack_416;
    puStack_41c = auStack_418;
    uVar2 = thunk_FUN_00479000(*(undefined4 *)(param_1 + 0x168));
    FUN_0047fe48(uVar2);
    FUN_0047fb3c(*(int *)(param_1 + 0x180),(char *)&puStack_424,param_3);
  }
  return;
}

