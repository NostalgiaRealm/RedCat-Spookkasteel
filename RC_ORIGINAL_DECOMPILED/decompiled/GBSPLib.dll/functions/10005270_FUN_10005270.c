/*
 * FUN_10005270 at 10005270
 * undefined FUN_10005270(void)
 * Address ranges: 10005270-100052bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10005270(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_c [3];
  
  iVar1 = FUN_10014700(param_1,0,1);
  if (iVar1 != 0) {
    while( true ) {
      iVar2 = FUN_10004dc0(local_c,iVar1);
      if (iVar2 == 0) break;
      if (local_c[0] == 0xffff) {
        return 1;
      }
    }
  }
  return 0;
}

