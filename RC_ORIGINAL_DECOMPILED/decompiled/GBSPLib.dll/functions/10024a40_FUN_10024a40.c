/*
 * FUN_10024a40 at 10024a40
 * undefined FUN_10024a40(void)
 * Address ranges: 10024a40-10024ac5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10024a40(undefined4 *param_1)

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
    FUN_1002952c(*puVar2,0,0,local_200,local_100);
    iVar1 = FUN_10024ad0(local_200,*param_1);
    if ((iVar1 == 1) && (iVar1 = FUN_10024ad0(local_100,param_1[1]), iVar1 == 1)) break;
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

