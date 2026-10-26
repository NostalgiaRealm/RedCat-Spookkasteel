/*
 * FUN_00405abc at 00405abc
 * _union_2683 * __register FUN_00405abc(VARIANTARG * param_1, VARIANTARG * param_2)
 * Address ranges: 00405abc-00405b22;00405b43-00405bcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

_union_2683 * FUN_00405abc(VARIANTARG *param_1,VARIANTARG *param_2)

{
  byte bVar1;
  bool bVar2;
  _union_2683 *p_Var3;
  _union_2683 *p_Var4;
  undefined2 extraout_var_00;
  undefined2 uVar6;
  uint uVar5;
  undefined2 extraout_var_01;
  undefined3 extraout_var;
  _union_2683 *p_Var7;
  ushort uVar8;
  float10 in_ST0;
  float10 in_ST1;
  
  p_Var3 = (_union_2683 *)(*(uint *)&param_1->n1 & 0xfff);
  p_Var7 = (_union_2683 *)(*(uint *)&param_2->n1 & 0xfff);
  if (p_Var3 < (_union_2683 *)0x12) {
LAB_00405ae2:
    if ((_union_2683 *)0x11 < p_Var7) {
      p_Var4 = p_Var7;
      if (p_Var7 != (_union_2683 *)0x100) goto LAB_00405b11;
      p_Var7 = (_union_2683 *)0x8;
    }
    p_Var4 = (_union_2683 *)
             CONCAT31((int3)((uint)p_Var3 >> 8),*(undefined1 *)((int)p_Var3 + 0x56f06c));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)
            (CONCAT31((int3)((uint)p_Var7 >> 8),*(undefined1 *)((int)p_Var7 + 0x56f06c)) + 0x56f080
            + (int)p_Var4 * 8)) {
    case 0:
      goto switchD_00405b08_caseD_0;
    case 1:
      return p_Var4;
    case 2:
      FUN_0040514c(param_2);
      p_Var3 = (_union_2683 *)FUN_0040514c(param_1);
      return p_Var3;
    default:
      FUN_004051ec(param_1);
      FUN_004051ec(param_2);
      uVar6 = extraout_var_00;
      break;
    case 4:
      FUN_00405248(param_1);
      FUN_00405248(param_2);
      uVar6 = extraout_var_01;
      break;
    case 5:
      p_Var3 = (_union_2683 *)FUN_004059b8(param_1,param_2);
      return p_Var3;
    case 6:
      FUN_004051b8(param_2);
      bVar2 = FUN_004051b8(param_1);
      return (_union_2683 *)CONCAT31(extraout_var,bVar2);
    }
    uVar8 = (ushort)(in_ST0 < in_ST1) << 8 | (ushort)(in_ST0 == in_ST1) << 0xe;
    uVar5 = CONCAT22(uVar6,(short)CONCAT31((int3)(CONCAT22(uVar6,uVar8) >> 8),(char)(uVar8 >> 8))) &
            0xffff4001;
    bVar1 = (char)uVar5 << 7;
    return (_union_2683 *)
           CONCAT22((short)(uVar5 >> 0x10),CONCAT11((byte)(uVar5 >> 8) | bVar1,bVar1));
  }
  p_Var4 = p_Var3;
  if (p_Var3 == (_union_2683 *)0x100) {
    p_Var3 = (_union_2683 *)0x8;
    goto LAB_00405ae2;
  }
LAB_00405b11:
  if (p_Var4 == (_union_2683 *)0x101) {
    p_Var3 = (_union_2683 *)FUN_00405a20((short *)0x101,p_Var7);
    return p_Var3;
  }
switchD_00405b08_caseD_0:
  p_Var3 = (_union_2683 *)thunk_FUN_00402874((uint)p_Var4);
  return p_Var3;
}

