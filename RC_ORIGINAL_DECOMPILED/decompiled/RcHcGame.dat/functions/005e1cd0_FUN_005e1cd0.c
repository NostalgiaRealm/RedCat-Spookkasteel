/*
 * FUN_005e1cd0 at 005e1cd0
 * undefined FUN_005e1cd0(void)
 * Address ranges: 005e1cd0-005e1dd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005e1cd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char local_304;
  char local_303 [255];
  undefined1 local_204 [256];
  undefined1 local_104 [260];
  
  FUN_0060d5da(param_2,0,local_104,local_204,&local_304);
  iVar1 = FUN_005e1950(param_1,local_104);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_005cf3b0(0xc);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar3 = FUN_005e1430(local_204);
  *piVar2 = iVar3;
  if (iVar3 == 0) {
    FUN_005cf400(piVar2);
    _DAT_007203c0 = 0;
    return (int *)0x0;
  }
  if (local_304 == '.') {
    pcVar4 = local_303;
  }
  else {
    pcVar4 = &local_304;
  }
  iVar3 = FUN_005e1430(pcVar4);
  piVar2[1] = iVar3;
  if (iVar3 == 0) {
    FUN_005cf400(*piVar2);
    *piVar2 = 0;
    _DAT_007203c0 = 0;
    FUN_005cf400(piVar2);
    _DAT_007203c0 = 0;
    return (int *)0x0;
  }
  piVar2[2] = *(int *)(iVar1 + 0x24);
  return piVar2;
}

