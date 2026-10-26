/*
 * FUN_00403bd8 at 00403bd8
 * undefined __register FUN_00403bd8(void)
 * Address ranges: 00403bd8-00403c24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403bd8(void)

{
  ulonglong uVar1;
  uint uVar2;
  PVOID pvVar3;
  char *pcVar4;
  
  pcVar4 = s_Runtime_error_at_00000000_0056f034 + 0x10;
  uVar2 = DAT_00573038;
  do {
    uVar1 = (ulonglong)uVar2;
    uVar2 = uVar2 / 10;
    *pcVar4 = (char)(uVar1 % 10) + '0';
    pcVar4 = pcVar4 + -1;
  } while (uVar2 != 0);
  pvVar3 = FUN_004064d0(DAT_00573040);
  uVar2 = (int)DAT_00573040 - (int)pvVar3;
  pcVar4 = s_Runtime_error_at_00000000_0056f034 + 0x1c;
  do {
    *pcVar4 = s_0123456789ABCDEF_0056f05c[uVar2 & 0xf];
    pcVar4 = pcVar4 + -1;
    uVar2 = uVar2 >> 4;
  } while (uVar2 != 0);
  return;
}

