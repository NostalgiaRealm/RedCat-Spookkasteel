/*
 * FUN_00430e5c at 00430e5c
 * undefined1 __register FUN_00430e5c(void)
 * Address ranges: 00430e5c-00430ecb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00430e5c(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_stack_00000004;
  
  uVar2 = *(int *)(DAT_00573760 + 4) != 0;
  if ((*(char *)(in_stack_00000004 + -1) != '\0') && (DAT_0057377c == '\x02')) {
    cVar1 = (**(code **)(*DAT_0057375c + 0x50))();
    if ((cVar1 == '\0') && (DAT_0057375c[0x24] != 0)) {
      if ((int *)DAT_0057375c[0x24] != (int *)0x0) {
        uVar2 = FUN_00403270((int *)DAT_0057375c[0x24],*(undefined4 *)(DAT_00573760 + 4),
                             DAT_0057375c);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

