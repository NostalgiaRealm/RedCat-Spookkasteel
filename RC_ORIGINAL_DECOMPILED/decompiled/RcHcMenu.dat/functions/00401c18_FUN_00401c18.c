/*
 * FUN_00401c18 at 00401c18
 * undefined __register FUN_00401c18(void)
 * Address ranges: 00401c18-00401ced;00401cf5-00401cf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00401c18(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  
  if (DAT_00573430 == '\0') {
    return;
  }
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (DAT_00573049 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573438);
  }
  DAT_00573430 = 0;
  LocalFree(DAT_00573490);
  DAT_00573490 = (HLOCAL)0x0;
  for (puVar1 = DAT_00573458; (undefined4 **)puVar1 != &DAT_00573458; puVar1 = (undefined4 *)*puVar1
      ) {
    VirtualFree((LPVOID)puVar1[2],0,0x8000);
  }
  FUN_00401518(0x573458);
  FUN_00401518(0x573468);
  FUN_00401518(0x573494);
  puVar1 = DAT_00573450;
  while (puVar1 != (undefined4 *)0x0) {
    DAT_00573450 = (undefined4 *)*puVar1;
    LocalFree(puVar1);
    puVar1 = DAT_00573450;
  }
  DAT_00573450 = puVar1;
  *in_FS_OFFSET = uStack_14;
  if (DAT_00573049 != '\0') {
    uStack_14 = 0x401ce3;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00573438);
  }
  uStack_14 = 0x401ced;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00573438);
  return;
}

