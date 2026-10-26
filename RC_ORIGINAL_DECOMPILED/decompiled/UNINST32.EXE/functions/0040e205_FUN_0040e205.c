/*
 * FUN_0040e205 at 0040e205
 * LONG __cdecl FUN_0040e205(int param_1, _EXCEPTION_POINTERS * param_2)
 * Address ranges: 0040e205-0040e345
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LONG __cdecl FUN_0040e205(int param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar4 = FUN_0040e346(param_1);
  uVar3 = DAT_00413564;
  if ((piVar4 == (int *)0x0) || (pcVar1 = (code *)piVar4[2], pcVar1 == (code *)0x0)) {
    LVar5 = UnhandledExceptionFilter(param_2);
  }
  else if (pcVar1 == (code *)0x5) {
    piVar4[2] = 0;
    LVar5 = 1;
  }
  else {
    if (pcVar1 != (code *)0x1) {
      DAT_00413564 = param_2;
      if (piVar4[1] == 8) {
        if (DAT_00413328 < DAT_0041332c + DAT_00413328) {
          iVar6 = (DAT_0041332c + DAT_00413328) - DAT_00413328;
          puVar7 = (undefined4 *)(DAT_00413328 * 0xc + 0x4132b8);
          do {
            *puVar7 = 0;
            puVar7 = puVar7 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar2 = DAT_00413334;
        iVar6 = *piVar4;
        if (iVar6 == -0x3fffff72) {
          DAT_00413334 = 0x83;
        }
        else if (iVar6 == -0x3fffff70) {
          DAT_00413334 = 0x81;
        }
        else if (iVar6 == -0x3fffff6f) {
          DAT_00413334 = 0x84;
        }
        else if (iVar6 == -0x3fffff6d) {
          DAT_00413334 = 0x85;
        }
        else if (iVar6 == -0x3fffff73) {
          DAT_00413334 = 0x82;
        }
        else if (iVar6 == -0x3fffff71) {
          DAT_00413334 = 0x86;
        }
        else if (iVar6 == -0x3fffff6e) {
          DAT_00413334 = 0x8a;
        }
        (*pcVar1)(8,DAT_00413334);
        DAT_00413334 = uVar2;
      }
      else {
        piVar4[2] = 0;
        (*pcVar1)(piVar4[1]);
      }
    }
    LVar5 = -1;
    DAT_00413564 = (_EXCEPTION_POINTERS *)uVar3;
  }
  return LVar5;
}

