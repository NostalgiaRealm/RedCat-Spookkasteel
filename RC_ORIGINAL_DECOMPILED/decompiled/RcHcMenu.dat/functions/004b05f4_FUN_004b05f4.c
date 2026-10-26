/*
 * FUN_004b05f4 at 004b05f4
 * bool __register FUN_004b05f4(void)
 * Address ranges: 004b05f4-004b060c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004b05f4(void)

{
  LONG LVar1;
  
  LVar1 = ChangeDisplaySettingsA((DEVMODEA *)0x0,0);
  return LVar1 == 0;
}

