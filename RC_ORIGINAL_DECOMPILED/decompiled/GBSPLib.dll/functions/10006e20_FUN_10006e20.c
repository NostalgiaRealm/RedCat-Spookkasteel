/*
 * FUN_10006e20 at 10006e20
 * undefined FUN_10006e20(void)
 * Address ranges: 10006e20-1000709d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006e20(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  
  FUN_10027d90();
  pcVar1 = (char *)FUN_1000b0e0();
  iVar3 = 0;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iVar2 = FUN_10011a60();
    if (iVar2 == 0) {
      return 0;
    }
    FUN_10014ac0();
    FUN_10004d50();
    if (0 < DAT_10313064) {
      puVar4 = &DAT_10393094;
      do {
        iVar2 = FUN_10011cf0();
        if (iVar2 == 0) {
          return 0;
        }
        *puVar4 = in_stack_00000018;
        puVar4[1] = in_stack_00000014;
        puVar4[2] = DAT_1014e310;
        DAT_1014e310 = DAT_1014e310 + in_stack_0000001c;
        puVar4[3] = iVar3;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 0xd;
      } while (iVar3 < DAT_10313064);
    }
    FUN_10014ac0();
    FUN_10014a40();
    FUN_10004d50();
    FUN_10014a40();
    DAT_1014e318 = DAT_10313064;
    FUN_10004d50();
    iVar3 = FUN_10014a20();
    if (iVar3 == 1) {
      DAT_1014e2bc = DAT_10393068;
      FUN_10004d50();
      iVar3 = FUN_10014a20();
      if (iVar3 == 1) {
        FUN_10004d50();
        iVar3 = 0;
        if (0 < DAT_10313064) {
          do {
            iVar2 = FUN_10011ee0();
            if (iVar2 == 0) {
              return 0;
            }
            iVar2 = FUN_10014a20();
            if (iVar2 != 1) goto LAB_10007089;
            iVar3 = iVar3 + 1;
          } while (iVar3 < DAT_10313064);
        }
        FUN_10011c70();
        return 1;
      }
    }
  }
LAB_10007089:
  (*DAT_1014e358)();
  return 0;
}

