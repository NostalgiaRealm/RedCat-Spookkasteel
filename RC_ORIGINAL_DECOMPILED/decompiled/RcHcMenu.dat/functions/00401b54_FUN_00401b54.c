/*
 * FUN_00401b54 at 00401b54
 * undefined __register FUN_00401b54(void)
 * Address ranges: 00401b54-00401c09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00401b54(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00573438);
  if (DAT_00573049 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573438);
  }
  FUN_00401518(0x573458);
  FUN_00401518(0x573468);
  FUN_00401518(0x573494);
  DAT_00573490 = LocalAlloc(0,0xff8);
  if (DAT_00573490 != (HLOCAL)0x0) {
    iVar1 = 3;
    do {
      *(undefined4 *)((int)DAT_00573490 + iVar1 * 4 + -0xc) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x401);
    DAT_0057347c = &DAT_00573478;
    DAT_00573478 = &DAT_00573478;
    DAT_00573484 = &DAT_00573478;
    DAT_00573430 = 1;
  }
  *in_FS_OFFSET = uStack_10;
  if (DAT_00573049 != '\0') {
    uStack_10 = 0x401c09;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00573438);
  }
  return;
}

