/*
 * FUN_00402e7d at 00402e7d
 * undefined __cdecl FUN_00402e7d(int param_1)
 * Address ranges: 00402e7d-00402f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00402e7d(int param_1)

{
  bool bVar1;
  bool bVar2;
  
  if ((DAT_004136c4 == 1000) || (DAT_004136c4 == 0x3f1)) {
    if (param_1 == 0) {
      if (DAT_00413a60 != 0) {
        if (DAT_00413a60 == 0xc) {
          DAT_00413a60 = 0;
          return;
        }
        DAT_00413a60 = (DAT_00413a98 == 0) - 1U & 0xc;
      }
    }
    else if (DAT_00413a60 != 0xb) {
      if (DAT_00413a60 == 0xc) {
switchD_00402eba_default:
        DAT_00413a60 = 0xb;
        return;
      }
      DAT_00413a60 = (DAT_00413a98 != 0) + 0xb;
    }
  }
  else {
    do {
      if (param_1 == 0) {
        DAT_00413a60 = DAT_00413a60 - 1;
      }
      else {
        DAT_00413a60 = DAT_00413a60 + 1;
      }
      switch(DAT_00413a60) {
      case 0:
        goto switchD_00402eba_caseD_0;
      case 1:
        bVar2 = DAT_00413ab4 < 0;
        bVar1 = DAT_00413ab4 == 0;
        break;
      case 2:
        bVar2 = DAT_00413768 < 0;
        bVar1 = DAT_00413768 == 0;
        break;
      case 3:
        bVar2 = DAT_00413b88 < 0;
        bVar1 = DAT_00413b88 == 0;
        break;
      case 4:
        bVar2 = DAT_00413774 < 0;
        bVar1 = DAT_00413774 == 0;
        break;
      case 5:
        bVar2 = DAT_00413720 < 0;
        bVar1 = DAT_00413720 == 0;
        break;
      case 6:
        bVar2 = DAT_00413b9c < 0;
        bVar1 = DAT_00413b9c == 0;
        break;
      case 7:
        bVar2 = DAT_00413b04 < 0;
        bVar1 = DAT_00413b04 == 0;
        break;
      case 8:
        bVar2 = DAT_00413afc < 0;
        bVar1 = DAT_00413afc == 0;
        break;
      case 9:
        bVar2 = DAT_004136c8 < 0;
        bVar1 = DAT_004136c8 == 0;
        break;
      case 10:
        if (DAT_0041379c != 0) {
          return;
        }
        if (0 < DAT_00413aa0) {
          return;
        }
        bVar2 = DAT_00413a80 < 0;
        bVar1 = DAT_00413a80 == 0;
        break;
      default:
        goto switchD_00402eba_default;
      }
    } while (bVar1 || bVar2);
  }
switchD_00402eba_caseD_0:
  return;
}

