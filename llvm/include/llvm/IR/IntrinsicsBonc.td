let IntrProperties = [IntrNoMem, IntrSpeculatable, IntrWillReturn] in {
  def int_bonc_loop_enter : DefaultAttrsIntrinsic<[]>;
  def int_bonc_loop_exit  : DefaultAttrsIntrinsic<[]>;
}