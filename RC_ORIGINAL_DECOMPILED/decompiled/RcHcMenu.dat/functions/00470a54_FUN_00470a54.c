/*
 * FUN_00470a54 at 00470a54
 * undefined __register FUN_00470a54(int param_1, VARIANTARG * param_2)
 * Address ranges: 00470a54-00470b1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00470a54(int param_1,VARIANTARG *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  
  iVar4 = FUN_0046f940(param_1);
  if (param_1 != iVar4) {
    iVar4 = FUN_0046f940(param_1);
    FUN_00470a54(iVar4,param_2);
    return;
  }
  uVar5 = FUN_00405c08((short *)param_2);
  *(byte *)(param_1 + 0x31) = (byte)uVar5 ^ 1;
  uVar5 = FUN_00405c08((short *)param_2);
  if (((char)uVar5 != '\0') || (bVar1 = FUN_00405c2c((short *)param_2), bVar1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x28) = uVar2;
  if (*(char *)(param_1 + 0x30) != '\0') goto LAB_00470b00;
  uVar3 = FUN_00405bf8((undefined2 *)param_2);
  iVar4 = CONCAT22(extraout_var,uVar3);
  if (iVar4 < 8) {
    if (iVar4 == 7) {
      *(undefined1 *)(param_1 + 0x30) = 0xb;
      goto LAB_00470b00;
    }
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        *(undefined1 *)(param_1 + 0x30) = 3;
        goto LAB_00470b00;
      }
      if (iVar4 - 4U < 2) {
        *(undefined1 *)(param_1 + 0x30) = 6;
        goto LAB_00470b00;
      }
      if (iVar4 - 4U == 2) {
        *(undefined1 *)(param_1 + 0x30) = 8;
        goto LAB_00470b00;
      }
LAB_00470afc:
      *(undefined1 *)(param_1 + 0x30) = 0;
      goto LAB_00470b00;
    }
LAB_00470ad2:
    *(undefined1 *)(param_1 + 0x30) = 2;
  }
  else {
    if (iVar4 != 8) {
      if (iVar4 == 0xb) {
        *(undefined1 *)(param_1 + 0x30) = 5;
        goto LAB_00470b00;
      }
      if (iVar4 == 0x11) goto LAB_00470ad2;
      if (iVar4 != 0x100) goto LAB_00470afc;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
LAB_00470b00:
  FUN_00404e28((VARIANT *)(param_1 + 0x18),param_2);
  return;
}

