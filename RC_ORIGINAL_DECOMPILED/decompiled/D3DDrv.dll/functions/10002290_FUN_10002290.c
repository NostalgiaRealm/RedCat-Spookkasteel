/*
 * FUN_10002290 at 10002290
 * undefined4 __stdcall FUN_10002290(void)
 * Address ranges: 10002290-100022d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002290(void)

{
  int iVar1;
  
  FUN_100020f0(s_____D3DMain_CreateD3D_____100140a4);
  iVar1 = (**(code **)*DAT_100274a8)(DAT_100274a8,&DAT_10011848,&DAT_100274ac);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_100020f0(s_Creation_of_IDirect3D_failed___s_10014080);
    return 0;
  }
  return 1;
}

