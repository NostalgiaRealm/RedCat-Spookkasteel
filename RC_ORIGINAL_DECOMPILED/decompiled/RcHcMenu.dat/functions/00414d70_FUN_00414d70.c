/*
 * FUN_00414d70 at 00414d70
 * undefined __register FUN_00414d70(int param_1, HMODULE param_2, LPCSTR param_3, LPCSTR param_4)
 * Address ranges: 00414d70-00414ddb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00414d70(int param_1,HMODULE param_2,LPCSTR param_3,LPCSTR param_4)

{
  HRSRC pHVar1;
  HGLOBAL pvVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  
  pHVar1 = FindResourceA(param_2,param_3,param_4);
  *(HRSRC *)(param_1 + 0x10) = pHVar1;
  if (pHVar1 == (HRSRC)0x0) {
    FUN_00414d00();
  }
  pvVar2 = LoadResource(param_2,*(HRSRC *)(param_1 + 0x10));
  *(HGLOBAL *)(param_1 + 0x14) = pvVar2;
  if (pvVar2 == (HGLOBAL)0x0) {
    FUN_00414d00();
  }
  DVar3 = SizeofResource(param_2,*(HRSRC *)(param_1 + 0x10));
  pvVar4 = LockResource(*(HGLOBAL *)(param_1 + 0x14));
  FUN_00414ad8(param_1,pvVar4,DVar3);
  return;
}

