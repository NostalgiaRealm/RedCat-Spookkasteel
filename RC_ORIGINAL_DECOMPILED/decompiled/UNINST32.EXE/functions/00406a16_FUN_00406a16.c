/*
 * FUN_00406a16 at 00406a16
 * undefined __cdecl FUN_00406a16(LPCSTR param_1, LPCSTR param_2, LPCSTR param_3)
 * Address ranges: 00406a16-00406b06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00406a16(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_0040b671(0x274);
  *(undefined4 **)(DAT_00413700 + DAT_004136d4 * 4) = puVar1;
  if (DAT_00413710 == 0) {
    OemToCharA(param_1,*(LPSTR *)(DAT_00413700 + DAT_004136d4 * 4));
  }
  else {
    lstrcpyA(*(LPSTR *)(DAT_00413700 + DAT_004136d4 * 4),param_1);
  }
  *(undefined2 *)(*(int *)(DAT_00413700 + DAT_004136d4 * 4) + 0x268) = DAT_00413b94;
  lstrcpyA((LPSTR)(*(int *)(DAT_00413700 + DAT_004136d4 * 4) + 0x208),param_2);
  *(undefined4 *)(*(int *)(DAT_00413700 + DAT_004136d4 * 4) + 600) = 0;
  if (*param_3 != '\0') {
    iVar2 = lstrlenA(param_3);
    puVar1 = FUN_0040b671(iVar2 + 1);
    *(undefined4 **)(*(int *)(DAT_00413700 + DAT_004136d4 * 4) + 600) = puVar1;
    lstrcpyA(*(LPSTR *)(*(int *)(DAT_00413700 + DAT_004136d4 * 4) + 600),param_3);
  }
  DAT_004136d4 = DAT_004136d4 + 1;
  return;
}

