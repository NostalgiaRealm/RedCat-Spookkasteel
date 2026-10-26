/*
 * FUN_10010686 at 10010686
 * undefined4 __cdecl FUN_10010686(LPCSTR param_1)
 * Address ranges: 10010686-100106af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10010686(LPCSTR param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_1000c352(uVar2);
    return 0xffffffff;
  }
  return 0;
}

