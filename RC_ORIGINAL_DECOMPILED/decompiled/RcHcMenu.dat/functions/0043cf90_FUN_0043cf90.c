/*
 * FUN_0043cf90 at 0043cf90
 * undefined __register FUN_0043cf90(void)
 * Address ranges: 0043cf90-0043d001
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043cf90(void)

{
  FUN_00403094(*(int **)PTR_DAT_005723fc);
  *(undefined4 *)PTR_DAT_005723fc = 0;
  FUN_00403094(*(int **)PTR_DAT_005725f0);
  *(undefined4 *)PTR_DAT_005725f0 = 0;
  FUN_00403094(DAT_0057374c);
  DAT_0057374c = (int *)0x0;
  FUN_00403094(DAT_0057378c);
  GlobalDeleteAtom(DAT_0057375a);
  GlobalDeleteAtom(DAT_00573758);
  if (DAT_0056f8b8 != (HMODULE)0x0) {
    FreeLibrary(DAT_0056f8b8);
  }
  return;
}

