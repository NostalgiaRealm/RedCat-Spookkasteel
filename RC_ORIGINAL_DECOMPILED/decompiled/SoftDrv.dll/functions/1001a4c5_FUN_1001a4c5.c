/*
 * FUN_1001a4c5 at 1001a4c5
 * undefined FUN_1001a4c5(void)
 * Address ranges: 1001a4c5-1001a5dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001a4c5(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_1001a5d1:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_1001a5d1;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_10023b90 && (piVar4 != (int *)&DAT_10023bb0)) ||
        (iVar5 = FUN_1001ca94(uVar2), iVar5 == 0)))) {
      FUN_1001ca50(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      iVar5 = 1;
      param_2 = (int *)FUN_1001c860(uVar2,&param_1,1);
    }
    else {
      iVar3 = piVar4[2];
      iVar5 = *piVar4 - iVar3;
      *piVar4 = iVar3 + 1;
      piVar4[1] = piVar4[6] + -1;
      if (iVar5 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_10023ab0;
        }
        else {
          puVar6 = (undefined *)((&DAT_1020fc40)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_1001c788(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_1001c860(uVar2,iVar3,iVar5);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == (int *)iVar5) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}

