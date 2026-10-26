/*
 * FUN_00450554 at 00450554
 * undefined4 __register FUN_00450554(int param_1, int * param_2)
 * Address ranges: 00450554-004505a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00450554(int param_1,int *param_2)

{
  if (*param_2 == 0x1a) {
    if (*(char *)(param_1 + 0x49) != '\0') {
      SetThreadLocale(0x400);
      FUN_0040dd2c();
    }
    if (*(char *)(param_1 + 0x4a) != '\0') {
      FUN_0044f6b8(DAT_005737d8);
      if (*(char *)(param_1 + 0x78) != '\0') {
        FUN_00451864(param_1,'\0');
        FUN_00451864(param_1,'\x01');
      }
    }
  }
  return 0;
}

