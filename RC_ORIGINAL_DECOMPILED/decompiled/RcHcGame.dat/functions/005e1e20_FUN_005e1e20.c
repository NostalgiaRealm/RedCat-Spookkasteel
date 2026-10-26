/*
 * FUN_005e1e20 at 005e1e20
 * undefined FUN_005e1e20(void)
 * Address ranges: 005e1e20-005e1ea5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005e1e20(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  puVar2 = (undefined4 *)param_1[2];
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  while( true ) {
    FUN_0060d5da(*puVar2,0,0,local_200,local_100);
    iVar1 = FUN_005e1eb0(local_200,*param_1);
    if ((iVar1 == 1) && (iVar1 = FUN_005e1eb0(local_100,param_1[1]), iVar1 == 1)) break;
    puVar2 = (undefined4 *)puVar2[10];
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  param_1[2] = puVar2[10];
  return puVar2;
}

